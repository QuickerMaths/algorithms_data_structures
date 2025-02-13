#include <iostream>

using namespace std;

void display_tab(int tab[], int tab_size) {
    for(int i = 0; i < tab_size; i++) {
        cout << tab[i] << " ";
    }

    cout << endl;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void merge(int tab[], int l, int m, int r) {
    int le = m - l + 1, re = r - m;
    int L[le], R[re];

    for(int i = 0; i < le; i++)
        L[i] = tab[l + i];

    for(int j = 0; j < re; j++)
        R[j] = tab[m + 1 + j];

    int a = 0, b = 0, c = l;

    while(a < le && b < re) {
        if(L[a] <= R[b]) {
            tab[c] = L[a];
            a++;
        } else {
            tab[c] = R[b];
            b++;
        }
        c++;
    }

    while(a < le) {
        tab[c] = L[a];
        a++;
        c++;
    }

    while(b < re) {
        tab[c] = R[b];
        b++;
        c++;
    }
}

void merge_sort(int tab[], int l, int r) {
    if(l < r) {
        int m = l - (r - 1) / 2;

        merge_sort(tab, l, m);
        merge_sort(tab, m + 1, r);
        merge(tab, l, m, r);
    }
}


int main() {
    int tab[10] = { 24, 8, 7, 2, 4, 6, 10, 26, 32, 11 };
    int tab_size = sizeof(tab) / sizeof(tab[0]);

    display_tab(tab, tab_size);

    return 0;
}



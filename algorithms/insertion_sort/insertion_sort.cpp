#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display_tab(int tab[], int tab_size) {
    for(int i = 0; i < tab_size; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main() {
    int tab[10] = { 99, 8, 11, 2, 4, 6, 10, 26, 32, 77 };
    int tab_size = sizeof(tab) / sizeof(tab[0]);

    for(int i = 0; i < tab_size; i++) {
        int temp = tab[i], j = i - 1;

        while (j >= 0 && temp < tab[j]) { 
            tab[j + 1] = tab[j];
            j--;
        }

        tab[j + 1] = temp;    
    }

    display_tab(tab, tab_size);

    return 0;
}

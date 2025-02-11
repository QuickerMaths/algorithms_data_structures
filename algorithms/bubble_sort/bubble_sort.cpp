#include <iostream>

using namespace std;

void display_tab(int tab[10], int tab_size) {
    for(int i = 0; i < tab_size; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
};

int main() {
    int tab[10] = { 99, 8, 11, 2, 4, 6, 10, 26, 32, 77 };
    int tab_size = sizeof(tab) / sizeof(tab[0]);


    for(int i = 0; i < tab_size; i++) {
        bool swapped = false;

        for(int j = i + 1; j < tab_size; j++) {
            if(tab[i] > tab[j]) {
                swap(tab[i], tab[j]);
                swapped = true;
            }
        }

        if(swapped == false) break; 
    }

    display_tab(tab, tab_size);

    return 0;
};

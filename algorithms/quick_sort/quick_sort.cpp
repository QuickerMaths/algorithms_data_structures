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

int division(int tab[], int start, int end) {
   int j = start, pivot = tab[end]; 

   for(int i = start; i < end; i++) {
       if(tab[i] < pivot) {
           swap(tab[i],tab[j]);
           j++;
       }
   }

   swap(tab[end], tab[j]);

   return j;
}

void quick_sort(int tab[], int start, int end) {
    if(start < end) {
        int pivot = division(tab, start, end);
        quick_sort(tab, start, pivot - 1);
        quick_sort(tab, pivot + 1, end);
    }
}

int main() {
    int tab[10] = { 24, 8, 7, 2, 4, 6, 10, 26, 32, 11 };
    int tab_size = sizeof(tab) / sizeof(tab[0]);
    
    quick_sort(tab, 0, tab_size - 1);

    display_tab(tab, tab_size);

    return 0;
}

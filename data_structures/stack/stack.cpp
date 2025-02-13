#include <iostream>

using namespace std;

struct stack_el {
    stack_el *prev;
    int value;
} *top = NULL;


void peak() {
    if(top == NULL) {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Top element: " << top->value << endl;
}

void push(int value) {
    stack_el* new_el = new stack_el;  
    new_el->prev = top;
    new_el->value = value;
    top = new_el;
    delete new_el;

    cout << value << " added to the stack." << endl;
}

void pop() {
    if(top == NULL) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Element: " << top->value << " was removed from the stack." << endl;
        *top = *top->prev;
    }
}

int main() {
    push(2);
    push(3);
    pop();
    peak();
    return 0;
}

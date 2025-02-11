#include <iostream>

using namespace std;

void fib_inter() {
    int n = 10, a = 0, b = 1;

    for(int i = 1; i < n; i++) {
        int temp = b;
        b += a;
        a = temp;
    }

    cout << "Iterative result: " << b << endl;
};

int recursion(int n) {
    if(n == 0 || n ==1) {
        return n;
    }

    return recursion(n - 1) + recursion(n - 2);
};


void fib_recursion() {
    int n = 10, fib;

    fib = recursion(n);

    cout << "Recursive result: " << fib << endl;
};

int main() {
    fib_inter();
    fib_recursion();

    return 0;
}

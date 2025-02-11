#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int bin = 101101;
    int dec = 0, i = 0;

    while(bin > 0) {
        dec += (bin % 10) * pow(2, i);
        bin /= 10;
        i++;
    }

    cout << dec << endl;

    return 1;
}

#include <iostream>

using namespace std;

string getHex(int dec) {
    switch(dec) {
        case 10: return "A";
        case 11: return "B";
        case 12: return "C";
        case 13: return "D";
        case 14: return "E";
        case 15: return "F";
        default: return to_string(dec);
    }
}

int main() {
    int dec = 123;
    string hex = "";

    while(dec > 0) {
        hex = getHex(dec % 16) + hex;
        dec /= 16;
    }

    cout << hex << endl;

    return 0;
}

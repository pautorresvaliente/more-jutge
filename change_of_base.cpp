#include <iostream>
#include <string>
using namespace std;


int dec_to_bin(int num) {
    if (num <= 1) {
        return num;
    }
    return dec_to_bin(num / 2) * 10 + (num % 2);
}

int dec_to_octal(int num) {
    if (num <= 7) {
        return num;
    }
    return dec_to_octal(num / 8) * 10 + (num % 8);
}

string dec_to_hex(int num) {
    string hex_cod = "0123456789ABCDEF";

    if (num <= 15) {
        return string(1, hex_cod[num]);
    }

    return dec_to_hex(num / 16) + hex_cod[num % 16];
}


int main() {
    int num;

    while (cin >> num) {
        cout << num << " = " << dec_to_bin(num) << ", " << dec_to_octal(num) << ", " << dec_to_hex(num) << endl;
    }

    return 0;
}

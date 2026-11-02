#include <iostream>
using namespace std;

bool is_hamming(int x) {
    if (x <= 0) return false;

    // Divide out all factors of 2, 3, and 5
    while (x % 2 == 0) x /= 2;
    while (x % 3 == 0) x /= 3;
    while (x % 5 == 0) x /= 5;

    return x == 1;
}

int main() {
    int num;
    while (cin >> num) {
        if (num >= 1) {
            cout << 1;

            int pointer = 2;
            int counter = 1; // 1 is already printed
            while (counter < num) { // counter < num gives exactly num elements
                if (is_hamming(pointer)) {
                    cout << "," << pointer;
                    counter++;
                }
                pointer++;
            }
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

// Prints the morse code and adds the num of symbol
void morse(char c, int& n) {
    if (c == 'a') {
        cout << ".-";
        n += 2;
    } else if (c == 'e') {
        cout << ".";
        n += 1;
    } else if (c == 'i') {
        cout << "..";
        n += 2;
    } else if (c == 'o') {
        cout << "---";
        n += 3;
    } else if (c == 'u') {
        cout << "..-";
        n += 3;
    }
}

int main() {
    int width, n = 0;
    char vowel;

    cin >> width;

    while (cin >> vowel) {
        if (n >= width) {
            cout << endl;
            n = 0;
        }
        morse(vowel, n);
    }

    if (n > 0) {
        cout << endl;
    }

    cout << "STOP" << endl;
}
#include <iostream>
using namespace std;

char complement(char c) {
    if (c == 'A') return 'T';
    if (c == 'T') return 'A';
    if (c == 'C') return 'G';
    if (c == 'G') return 'C';
    return ' ';
}

int main() {
    char c;
    int state = 0; 
    
    // Read character by character (respecting your restriction on vectors/strings)
    while (cin >> c) {
        if (state == 3) {
            cout << complement(c);
        } else {
            if (state == 0) {
                if (c == 'T') state = 1;
            } else if (state == 1) {
                if (c == 'A') state = 2;
                else if (c == 'T') state = 1;
                else state = 0;
            } else if (state == 2) {
                if (c == 'G') state = 3;
                else if (c == 'T') state = 1;
                else state = 0;
            }
        }
    }
    cout << endl;
}
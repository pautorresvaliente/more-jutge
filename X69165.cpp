#include <iostream>
using namespace std;


int main() {
    char c1, add, c2, equal, c3;

    while (cin >> c1 >> add >> c2 >> equal >> c3) {
        if (c1 == 'x') {
            cout << (c3 - '0') - (c2 - '0') << endl;
        } else if (c2 == 'x') {
            cout << (c3 - '0') - (c1 - '0') << endl;
        } else {
            cout << (c1 - '0') + (c2 - '0') << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;


void words(bool odd) {
    string word;
    cin >> word;
    if (word != ".") {
        words(!odd);

        if (odd) {
            cout << word << endl;
        }
    }
}

int main() {
    words(true);

    return 0;
}
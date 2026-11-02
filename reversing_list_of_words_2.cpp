#include <iostream>
#include <string>
using namespace std;


void print_word() {
    string word;

    if (cin >> word && word != "end") {
        print_word();
        cout << word << endl;
    }
}

int main() {

    print_word();

    return 0;
}
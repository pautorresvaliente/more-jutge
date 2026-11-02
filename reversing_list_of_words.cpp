#include <iostream>
#include <string>
using namespace std;

string printing_words() {
    string word;
    if (cin >> word) {
        return printing_words() + word + "\n";
    }
    return ""; // Fix: base case returns empty string on EOF
}

int main() {
    cout << printing_words(); // Fix: removed << endl to avoid extra blank line
    return 0;
}
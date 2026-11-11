#include <iostream>

using namespace std;

int evaluate() {
    char c;
    cin >> c;

    if (c == '(') {
        int left = evaluate();
        char op;
        cin >> op;
        int right = evaluate();
        cin >> c;
        if (op == '+') return left + right;
        if (op == '-') return left - right;
        if (op == '*') return left * right;
    } else {
        return c - '0';
    }
}

int main() {
    cout << evaluate() << endl;
    return 0;
}
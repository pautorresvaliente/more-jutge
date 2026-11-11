#include <iostream>


int expression() {
    char c;

    std::cin >> c;

    if (c == '+') return expression() + expression();
    else if (c == '-') return expression() - expression();
    else if (c == '*') return expression() * expression();

    return c - '0';
}

int main() {
    std::cout << expression() << std::endl;

    return 0;
}

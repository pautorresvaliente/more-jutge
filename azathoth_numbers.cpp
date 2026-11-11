#include <iostream>


int dec_to_bin(int n) {
    if (n < 2) return n;

    return dec_to_bin(n / 2) * 10 + n % 2;
}

void binary_print(int n) {
    std::cout << dec_to_bin(n) << ".";
}

void azathoth_num(int n) {
    if (n >= 50) {
        azathoth_num(n / 50);
    }
    binary_print(n % 50);
}

int main() {
    int n;

    while (std::cin >> n) {
        std::cout << n << " = .";
        azathoth_num(n);
        std::cout << std::endl;
    }
    return 0;
}
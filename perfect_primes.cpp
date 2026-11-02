#include <iostream>
using namespace std;


bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int sum_of_digits(int n) {
    if (n < 10) {
        return n;
    }

    return (n % 10) + sum_of_digits(n / 10);
}

bool is_perfect_prime(int n) {
    if (n < 10) {
        return is_prime(n);
    }

    return is_prime(n) && is_perfect_prime(sum_of_digits(n));
}

int main() {
    cout << is_perfect_prime(977) << endl;   // → true
    cout << is_perfect_prime(978) << endl;   // → false
    cout << is_perfect_prime(0) << endl;     // → false
    cout << is_perfect_prime(11) << endl;    // → true 

    return 0;
}
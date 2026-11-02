#include <iostream>

using namespace std;

bool is_strobogrammatic(int n) {
    if (n == 0) return true;

    // 1. Find the magnitude divisor (e.g., for 1881, div = 1000)
    int div = 1;
    int temp = n;
    while (temp >= 10) {
        div *= 10;
        temp /= 10;
    }

    // 2. Process digits from both ends inward
    while (n > 0) {
        int left = n / div;
        int right = n % 10;

        // Verify valid strobogrammatic pair
        bool valid = (left == 0 && right == 0) ||
                     (left == 1 && right == 1) ||
                     (left == 8 && right == 8) ||
                     (left == 6 && right == 9) ||
                     (left == 9 && right == 6);

        if (!valid) return false;

        // Remove the leftmost digit and rightmost digit
        n = (n % div) / 10;
        
        // Reduce divisor by 2 power scale (since 2 digits were removed)
        div /= 100;
    }

    return true;
}

int main() {
    int n;
    int odd_count = 0;

    while (cin >> n) {
        if (is_strobogrammatic(n)) {
            cout << n << " is strobogrammatic" << endl;
            if (n % 2 != 0) {
                odd_count++;
            }
        } else {
            cout << n << " is not strobogrammatic" << endl;
        }
    }

    cout << endl;
    cout << "odd strobogrammatic: " << odd_count << endl;
}
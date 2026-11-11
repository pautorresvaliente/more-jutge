#include <iostream>
using namespace std;

int number_of_digits(int n) {
    if (n <= 9) {
        return 1;
    }
    return 1 + number_of_digits(n / 10);
}

void print_num(int num, int count) {
    for (int i = 0; i < count; i++) {
        cout << num;
        if (i < count - 1) {
            cout << "-";
        }
    }
}

void print_dots(int dots) {
    for (int i = 0; i < dots; i++) {
        cout << ".";
    }
}

int main() {
    int n, r;
    
    if (cin >> n >> r) {
        int digits = number_of_digits(n);
        
        for (int i = 1; i <= r; i++) {
            print_num(n, i);
            
            int dots_count = 2 * (r - i) * (digits + 1) + 1;
            print_dots(dots_count);
            
            print_num(n, i);
            cout << endl;
        }
    }
    return 0;
}
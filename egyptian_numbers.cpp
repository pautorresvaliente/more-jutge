#include <iostream>
#include <string>
using namespace std;

void print_line(int n, char letter) {
    if (n > 0) {
        cout << "|";
        for (int g = 0; g < n; g++) {
            cout << letter;
        }
        for (int space = 0; space < 9 - n; space++) {
            cout << " ";
        }
        cout << "|" << endl;
    }
}

int main() {
    string name;
    while (cin >> name) {
        long long sum = 0;
        long long num;
        while (cin >> num && num != -1) {
            sum += num;
        }
        cout << name << endl;
        cout << "+---------+" << endl;

        print_line((sum / 1000000) % 10, 'G');
        print_line((sum / 100000) % 10, 'F');
        print_line((sum / 10000) % 10, 'E');
        print_line((sum / 1000) % 10, 'D');
        print_line((sum / 100) % 10, 'C');
        print_line((sum / 10) % 10, 'B');
        print_line(sum % 10, 'A');

        cout << "+---------+" << endl;
        cout << endl;
    }

    return 0;
}
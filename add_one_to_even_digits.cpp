#include <iostream>
using namespace std;


int main() {
    int num;

    while (cin >> num) {
        if (num == 0) {
            cout << 1 << endl;
            continue;
        }

        int c = 1;
        int temp = num;
        while (temp >= 10) {
            c *= 10;
            temp /= 10;
        }

        int new_num = 0;
        while (c > 0) {
            new_num *= 10;

            int n = num / c;
            if (n % 2 == 0) {
                n++;
            }
            new_num += n;
            num %= c;
            c /= 10;
        }
        cout << new_num << endl;
    }
}
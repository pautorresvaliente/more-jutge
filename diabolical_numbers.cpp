#include <iostream>
#include <iomanip>
using namespace std;


bool is_diabolical(int n) {
    int temp = n, sum_digits = 0;

    while (temp > 0) {
        sum_digits += temp % 4;
        temp /= 4;
    }

    return (n % (sum_digits * 2) == 0);
}
int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    int num, sum = 0;

    while (cin >> num && num != -1) {
        if (is_diabolical(num)) sum++;
    }

    cout << setw(6) << setfill('0') << sum << endl;
    return 0;
}
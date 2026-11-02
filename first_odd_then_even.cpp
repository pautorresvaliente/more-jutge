#include <iostream>
using namespace std;

int main() {
    int num;

    while (cin >> num) {
        int size = 1, temp = num;

        
        while (temp >= 10) {
            size *= 10;
            temp /= 10;
        }

        int odd = 0, even = 0, curr_num;
        int even_mult = 1; // Start multiplier at 1

        while (size > 0) {
            curr_num = num / size;

            if (curr_num % 2 == 0) { // Even
                if (curr_num != 0) {
                    even *= 10;
                    even += curr_num;
                    even_mult *= 10; // Multiply by 10 for every even digit added
                }
            } else {
                odd *= 10;
                odd += curr_num;
            }

            num %= size;
            size /= 10;
        }

        int x = (odd * even_mult) + even;
        int z = 2 * x;

        cout << x << " " << z << endl;
    }
}
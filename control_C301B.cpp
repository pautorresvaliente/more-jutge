#include <iostream>
using namespace std;

/**
 * @pre natural number
 * @post absolute difference between the sum of the even nums and odd nums
 */
int valencia(int n) {
    int sum_even = 0, sum_odd = 0;
    bool odd = true;
    
    while (n > 0) {
        if (odd) {
            sum_odd += n % 10;
        } else {
            sum_even += n % 10;
        }

        n /= 10;
        odd = !odd;
    }

    int valencia = sum_even - sum_odd;

    if (valencia < 0) {
        valencia *= -1;
    }

    return valencia;
}

int main()
{
    int num, greatest_valencia = 0, first_num;
    bool found = false;

    while (cin >> num) {
        int curr_valencia = valencia(num);

        if (curr_valencia == 0 and not found) {
            first_num = num;
            found = true;
        }

        if (curr_valencia > greatest_valencia) {
            greatest_valencia = curr_valencia;
        }
    }

    if (found) {
        cout << "The first balanced number is " << first_num << ".\n";
    } else {
        cout << "The greatest valencia is " << greatest_valencia << ".\n";
    }
    
    return 0;
}
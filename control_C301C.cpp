#include <iostream>
using namespace std;

int sum_divisors(int n)
{
    if (n <= 1) return 0;
    
    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i * i != n)
            {
                sum += n / i;
            }
        }
    }
    return sum;
}

int main()
{
    int n;
    while (cin >> n)
    {
        int total_s = sum_divisors(n - 2) + sum_divisors(n) + sum_divisors(n + 2);

        if (total_s == n)
        {
            cout << n << ": popiropis" << endl;
        }
        else if (total_s % n == 0 && total_s / n >= 2)
        {
            cout << n << ": " << (total_s / n) << "-popiropis" << endl;
        }
        else
        {
            cout << n << ": nothing" << endl;
        }
    }
}
#include <iostream>
using namespace std;

int sum_divisors(int a)
{
    int sum = 1;

    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            sum += i;

            if (i * i != a)
            {
                sum += a / i;
            }
        }
    }
    return sum;
}

bool are_friends(int a, int b)
{
    return (a != b && a == sum_divisors(b) && b == sum_divisors(a));
}

int main()
{
    int a, b;
    bool is_first = true;
    while (cin >> a >> b)
    {
        if (are_friends(a, b))
        {
            if (!is_first)
            {
                cout << ",";
            }
            else
            {
                is_first = false;
            }
            cout << "(" << a << " " << b << ")";
        }
    }
    cout << endl;
    return 0;
}
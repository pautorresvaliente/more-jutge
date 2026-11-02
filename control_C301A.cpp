#include <iostream>
using namespace std;

/**
 * @pre natural number greater or equal than 4
 * @post true if number is powerful else false
 */
bool is_powerful(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {

            if (n % (i * i) != 0)
            {
                return false;
            }

            while (n % i == 0) {
                n /= i;
            }
        }
    }
    return (n == 1);
}

int main()
{
    int num;

    while (cin >> num)
    {
        if (num >= 1)
        {
            cout << "1";
        }
        for (int i = 4; i <= num; i++)
        {
            if (is_powerful(i))
            {
                cout << "," << i;
            }
        }
        cout << endl;
    }
}
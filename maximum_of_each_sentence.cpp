#include <iostream>
using namespace std;


int main()
{
    int num, value;

    while (cin >> num)
    {
        int max_value;
        cin >> max_value;
        for (int i = 1; i < num; i++)
        {
            cin >> value;
            
            if (value > max_value)
            {
                max_value = value;
            }
        }
        cout << max_value << endl;
    }

    return 0;
}
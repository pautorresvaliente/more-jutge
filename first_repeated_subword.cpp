#include <iostream>
using namespace std;

int main()
{
    char char1, char2, char3;
    char combination[8] = {false}; // aaa, aab, aba, abb, baa, bab, bba, bbb
    int index = 0;
    cin >> char1 >> char2;

    while (cin >> char3)
    {
        if (char1 == 'a')
        { // a
            if (char2 == 'a')
            { // aa
                if (char3 == 'a')
                { // aaa
                    if (combination[0])
                    {
                        break;
                    }
                    else
                    {
                        combination[0] = true;
                    }
                }
                else
                { // aab
                    if (combination[1])
                    {
                        break;
                    }
                    else
                    {
                        combination[1] = true;
                    }
                }
            }
            else
            {
                if (char3 == 'a')
                { // aba
                    if (combination[2])
                    {
                        break;
                    }
                    else
                    {
                        combination[2] = true;
                    }
                }
                else
                { // abb
                    if (combination[3])
                    {
                        break;
                    }
                    else
                    {
                        combination[3] = true;
                    }
                }
            }
        }
        else
        { // b
            if (char2 == 'a')
            { // ba
                if (char3 == 'a')
                { // baa
                    if (combination[4])
                    {
                        break;
                    }
                    else
                    {
                        combination[4] = true;
                    }
                }
                else
                { // bab
                    if (combination[5])
                    {
                        break;
                    }
                    else
                    {
                        combination[5] = true;
                    }
                }
            }
            else
            { // bb
                if (char3 == 'a')
                { // bba
                    if (combination[6])
                    {
                        break;
                    }
                    else
                    {
                        combination[6] = true;
                    }
                }
                else
                { // bbb
                    if (combination[7])
                    {
                        break;
                    }
                    else
                    {
                        combination[7] = true;
                    }
                }
            }
        }
        char1 = char2;
        char2 = char3;
        index++;
    }
    
    cout << char1 << char2 << char3 << " " << index << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    char character;
    bool after_question = false;
    int counterA = 0, counterB = 0, counter = 0;

    while (cin >> character)
    {
        if (character == 'a')
            counterA++;
        else if (character == 'b')
            counterB++;
        else
        {
            if (after_question) 
            {
                if (counterA > counterB)
                    counter++;
                
            }

            after_question = (character == '?');

            counterA = 0, counterB = 0;
        }
    }

    cout << counter << endl;
    return 0;
}
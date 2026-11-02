#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_word;
    if (!(cin >> first_word))
        return 0;

    int max_streak = 1;
    int current_streak = 1;
    string word;

    while (cin >> word)
    {
        if (word == first_word)
        {
            current_streak++;
            if (current_streak > max_streak)
            {
                max_streak = current_streak;
            }
        }
        else
        {
            current_streak = 0;
        }
    }

    cout << max_streak << endl;
}
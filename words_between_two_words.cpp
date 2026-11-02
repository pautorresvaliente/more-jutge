#include <iostream>
using namespace std;

int main()
{
    string word;
    int counter = 0;
    // bool counterStarted = false;
    // bool counterEnded = false;
    // bool wrong = true;
    bool beggining = false, ended = false;
    
    while (cin >> word)
    {
        if (word == "beginning" && !ended) // Already "end" or right order so far
        {
            beggining = true;
        }
        else if (word == "end") // Already started or before the "beginning"
        {
            if (beggining)
                ended = true;
        }
        else // Only if "beggining"
        {
            if (beggining && !ended)
            {
                counter++;
            }
        }
    }
    if (beggining and ended)
    {
        cout << counter << endl;
    }
    else
    {
        cout << "wrong sequence" << endl;
    }
    return 0;
}
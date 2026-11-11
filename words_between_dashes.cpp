#include <iostream>
using namespace std;


int main() {
    int short_words = 0, medium_words = 0, large_words = 0, counter = 0;
    char letter;
    bool end = false;

    while (cin >> letter && !end) {
        if (letter == '-' || letter == '.') {
            if (counter > 0) {
                if (counter < 5) {
                    short_words++;
                } else if (counter <= 9) {
                    medium_words++;
                } else {
                    large_words++;
                }
            }
            if (letter == '.') end = true;

            counter = 0;
        } else {
            counter++;
        }
    }

    cout << short_words << "," << medium_words << "," << large_words << endl;
    return 0;
}
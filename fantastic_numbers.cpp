#include <iostream>
using namespace std;

bool is_fantastic(int x) {
    if (x == 0) return false; // 0 at position 1 (odd) is even -> not fantastic
    
    bool odd = true;
    bool condition = true;
    while (x > 0) {
        if ((x % 10) % 2 == 0) { // Even digit
            if (odd) condition = false;
        } else { // Odd digit
            if (!odd) condition = false;
        }

        odd = !odd;
        x /= 10;
    }
    return condition;
}

int main() {
    int num, counter = 0, counterTriplets = 0, consecutive = 0;

    while (cin >> num) {
        counter++; // Count every number read
        if (is_fantastic(num)) {
            consecutive++;

            if (consecutive >= 3) {
                counterTriplets++;
            }
        }
        else {
            consecutive = 0;
        }
    }

    cout << "fantastic numbers: " << counter << endl;
    cout << "fantastic triplets: " << counterTriplets << endl;

    return 0;
}
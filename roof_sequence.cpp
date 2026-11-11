#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int prev, curr, steps = 0;
    bool is_steps_up = true;
    bool valid_shape = true;

    if (!(cin >> prev)) {
        cout << "no" << "\n";
        return 0;
    }

    int first = prev;

    while (cin >> curr) {
        if (curr < prev) {
            if (is_steps_up) {
                is_steps_up = false;
            }
        } else if (curr > prev && !is_steps_up) {
            valid_shape = false;
        }

        if (is_steps_up) {
            steps++;
        } else {
            steps--;
        }
        prev = curr;
    }
    if (valid_shape && steps == 0 && first == prev) {
        cout << "si" << "\n";
    } else {
        cout << "no" << "\n";
    }

    return 0;
}
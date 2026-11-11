#include <iostream>
using namespace std;


int main() {
    int n;
    while (cin >> n) {
        bool permutation[n] = {false}, is_permutation = true;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;

            if (x > n || x < 1) {
               is_permutation = false; 
            }

            if (is_permutation) {
                permutation[x - 1] = true;
            }
        }

        for (int j = 0; j < sizeof(permutation) / sizeof(permutation[0]); j++) {
            if (permutation[j] == false) {
                is_permutation = false;
            }
        }

        cout << is_permutation << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;


int main() {
    int double_prev_num, prev_num, num;
    bool solvent = true, strictly_convex = true;

    cin >> double_prev_num >> prev_num;

    int pair_1 = prev_num - double_prev_num;
    if (pair_1 <= 0) {
        solvent = false;
    }

    while (cin >> num && (solvent || strictly_convex)) {
        int pair_2 = num - prev_num;
        int pair_3 = pair_2 - pair_1;
        if (pair_2 <= 0) {
            solvent = false;
        }
        if (pair_3 <= 0) {
            strictly_convex = false;
        }
        pair_1 = pair_2;
        prev_num = num;
    }
    if (solvent || strictly_convex) {
        cout << "solvent economy" << endl;
    } else {
        cout << "not solvent economy" << endl;
    }
    return 0;
}
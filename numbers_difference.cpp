#include <iostream>
#include <cmath>
using namespace std;


int diferencia(int x, int y) {
    if (x == 0 and y == 0) {
        return 0;
    }
    int diff = abs(x % 10 - y % 10);

    return diff + diferencia(x / 10, y / 10);
}

int main() {
    cout << diferencia(123, 124) << endl;
    cout << diferencia(312932, 0) << endl;
    cout << diferencia(233, 3293) << endl;
    cout << diferencia(24, 2317) << endl;
    return 0;
}
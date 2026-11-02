#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    for (int j = 0; j < n; j++) {
        cin >> x;
        bool isPrime = true;
        
        if (x <= 1) isPrime = false;
        
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << x << " is prime\n";
        } else {
            cout << x << " is not prime\n";
        }
    }
    return 0;
}

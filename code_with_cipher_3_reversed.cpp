#include <iostream>
using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        if (n < 0) {
            cout << ':';
            n = -n;
        }
        
        if (n == 0) {
            cout << '-';
        } else {
            while (n > 0) {
                int digit = n % 3;
                
                if (digit == 0) cout << '-';
                else if (digit == 1) cout << '+';
                else if (digit == 2) cout << '*';
                
                n /= 3;
            }
        }
        cout << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;


int main() {
    int num;

    while (cin >> num) {
        int counter = 0;
        if (num >= 111) {
            int size = 1, temp = num;
    
            while (temp >= 10) {
                size *= 10;
                temp /= 10;
            }

            int dig1 = num / size; // left-most digit
            num %= size; // remove left-most digit
            size /= 10; // move for the next iteration
            int dig2 = num / size;
            num %= size;
            size /= 10;

            while (size > 0) {
                int dig3 = num / size;
                num %= size;
                size /= 10;

                if (dig2 > dig1 && dig2 > dig3)
                    counter++;
                
                dig1 = dig2;
                dig2 = dig3;
            }
        }    
        
        cout << counter << endl;
    }
}
#include <iostream>
using namespace std;

// Iterative function
int interleaving(int x, int y) {
    int size = 1, temp = x;

    while (temp >= 10) {
        size *= 10;
        temp /= 10;
    }

    int sol = 0;

    // Loop based on size to safely process zeros
    while (size > 0) { 
        sol = ((sol * 10) + x / size) * 10 + (y / size);
        
        // Remove the most significant digit (leftmost)
        x %= size; 
        y %= size;
        
        size /= 10;
    }

    return sol;
}

// Recursive function
int recursive_interleaving(int x, int y) {
    if (y < 10) {
        return x * 10 + y;
    }

    return recursive_interleaving(x / 10, y / 10) * 100 + (x % 10 * 10 + y % 10);
}


int main() {
    int x, y;

    while (cin >> x >> y) {
        cout << interleaving(x, y) << endl;
    }
}
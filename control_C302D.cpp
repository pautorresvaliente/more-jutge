#include <iostream>
using namespace std;


int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    if (a1 != a2) return a1 - a2;
    if (m1 != m2) return m1 - m2;
    return d1 - d2;
}


int main() {
    int d1, m1, a1, d2, m2, a2;
    char slash;
    while (cin >> d1 >> slash >> m1 >> slash >> a1 >> d2 >> slash >> m2 >> slash >> a2) {
        int result = compara(d1, m1, a1, d2, m2, a2);
        
        if (result > 0) {
            cout << "posterior" << endl;
        } else if (result == 0) {
            cout << "iguals" << endl;
        } else {
            cout << "anterior" << endl;
        }
    }

    return 0;
}
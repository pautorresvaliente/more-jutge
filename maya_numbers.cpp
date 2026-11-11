#include <iostream>
using namespace std;

void maya_num(int num) {
    if (num == 0) {
        cout << "zero" << endl;
        return;
    }
    if (num >= 20) {
        maya_num(num / 20);
    }
    
    int n = num % 20;
    if (n == 0) {
        cout << "zero" << endl;
    } else {
        for (int i = 0; i < (n % 5); i++) {
            cout << ".";
        }
        if (n % 5 > 0) cout << endl;
        for (int j = 0; j < (n / 5); j++) {
            cout << "-----" << endl;
        }
    }
}

int main() {
    int num;
    while (cin >> num) {
        cout << num << endl;
        maya_num(num);
    }
    return 0;
}
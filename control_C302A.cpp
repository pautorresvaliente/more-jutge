#include <iostream>
#include <string>
using namespace std;

void compta(int n1, int n2, int* p1, int* p2) {
    *p1 += n1;
    *p2 += n2;
}


int main() {
    string voter = "empat"; // cas empty
    int votes1 = 0, votes2 = 0, n1, n2;

    while (cin >> voter and voter != "FRAU") {
        cin >> n1 >> n2;

        compta(n1, n2, &votes1, &votes2);

    }

    if (voter == "FRAU") {
        cout << "FRAU\n";
    }
    else if (voter == "empat" or votes1 == votes2) {
        cout << "empat\n";
    } else {
        if (votes1 > votes2) {
            cout << "el guanyador es en Pepito\n";
        } else {
            cout << "el guanyador es en Jaumet\n";
        }
    }

    return 0;
}
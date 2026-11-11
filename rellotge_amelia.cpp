#include <iostream>
using namespace std;


int bin_to_dec(int num) {
    int size = 1, expo = 1, res = 0;

    while (num > 0) {
        res += (num % 10) * expo;
        expo *= 2;
        num /= 10;
    }

    return res;
}

void llegeix_hora(int& h, int& m, int& s) {
    h = bin_to_dec(h);
    m = bin_to_dec(m);
    s = bin_to_dec(s);
}

void escriu_hora(int h, int m, int s) {
    cout << h << ":" << m << ":" << s << endl;
}

int main() {
    int n;
    char line, cifrat;

    cin >> n;

    for (int i = 0; i < n; i++) {
        // cin >> line >> h >> line >> m >> line >> s >> line;
        cin >> line;
        int h = 0, m = 0, s = 0;
        while (cin >> cifrat && cifrat != '|') {
            h *= 10;
            if (cifrat == '*') h++;
        }
        while (cin >> cifrat && cifrat != '|') {
            m *= 10;
            if (cifrat == '*') m++;
        }
        while (cin >> cifrat && cifrat != '|') {
            s *= 10;
            if (cifrat == '*') s++;
        }

        llegeix_hora(h, m, s);

        escriu_hora(h, m, s);
    }
    return 0;
}
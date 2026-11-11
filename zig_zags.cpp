#include <iostream>
using namespace std;


int main() {
    int height, width;

    while (cin >> height >> width) {
        int pointer = 0;
        bool to_right = true;
        for (int i = 0; i < height; i++) {
            for (int left = 0; left < pointer; left++) {
                cout << '*';
            }
            for (int middle = 0; middle < (width / 2); middle++) {
                cout << '#';
            }
            for (int right = 0; right < ((width / 2) - pointer); right++) {
                cout << '*';
            }
            cout << endl;

            if (to_right) {
                if (pointer == width / 2) {
                    to_right = false;
                    pointer--;
                } else {
                    pointer++;
                }
            } else {
                if (pointer == 0) {
                    to_right = true;
                    pointer++;
                } else {
                    pointer--;
                }
            }

        }
        cout << endl;
    }

    return 0;
}
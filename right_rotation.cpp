#include <iostream>
using namespace std;


int right_rotation(int num, int times) {
    if (times == 0 || num < 10) {
        return num;
    }
    int new_num = 0, temp = num, size = 1;
    while (temp > 9) {
        size *= 10;
        temp /= 10;
    }
    new_num += num % 10;
    new_num = new_num * size + num / 10;
    return right_rotation(new_num, times - 1);
}

int main() {
    int num, times;

    while (cin >> num >> times) {
        cout << right_rotation(num, times) << endl;
    }

    return 0;
}
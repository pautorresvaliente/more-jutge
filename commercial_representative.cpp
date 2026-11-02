#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    char route_name[100];
    while (cin >> route_name) {
        double start_x, start_y;
        cin >> start_x >> start_y;

        double total_distance = 0.0;
        double current_x = start_x;
        double current_y = start_y;

        double next_x, next_y;
        while (cin >> next_x >> next_y) {
            total_distance += distance(current_x, current_y, next_x, next_y);
            current_x = next_x;
            current_y = next_y;

            if (current_x == start_x && current_y == start_y) {
                break;
            }
        }

        cout << "Route " << route_name << ": " << total_distance << endl;
    }

    return 0;
}
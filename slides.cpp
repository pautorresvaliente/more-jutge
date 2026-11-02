#include <iostream>
using namespace std;

int main() {
    int prev_num, num;
    if (!(cin >> prev_num)) return 0;

    int curr_index = 2; // Position of 'num'

    // Active slide state
    int active_slope = 0;
    int active_length = 1;
    int active_start = 1;

    // Best record for Ascending (/)
    int max_asc_len = 0, max_asc_start = 0, max_asc_slope = 0;

    // Best record for Descending (\)
    int max_dsc_len = 0, max_dsc_start = 0, max_dsc_slope = 0;

    while (cin >> num) {
        int curr_slope = num - prev_num;

        if (curr_slope != 0 && curr_slope == active_slope) {
            active_length++;
        } else {
            // Check max for the active slide that just ended
            if (active_slope > 0 && active_length >= 3) {
                if (active_length > max_asc_len) {
                    max_asc_len = active_length;
                    max_asc_start = active_start;
                    max_asc_slope = active_slope;
                }
            } else if (active_slope < 0 && active_length >= 3) {
                if (active_length > max_dsc_len) {
                    max_dsc_len = active_length;
                    max_dsc_start = active_start;
                    max_dsc_slope = active_slope;
                }
            }

            // Start new slide state
            active_slope = curr_slope;
            if (curr_slope != 0) {
                active_length = 2;
                active_start = curr_index - 1; // prev_num is the starting element
            } else {
                active_length = 1;
                active_start = curr_index;
            }
        }

        prev_num = num;
        curr_index++;
    }

    // Final check for the slide active at end of stream
    if (active_slope > 0 && active_length >= 3 && active_length > max_asc_len) {
        max_asc_len = active_length;
        max_asc_start = active_start;
        max_asc_slope = active_slope;
    } else if (active_slope < 0 && active_length >= 3 && active_length > max_dsc_len) {
        max_dsc_len = active_length;
        max_dsc_start = active_start;
        max_dsc_slope = active_slope;
    }

    // Print results
    if (max_asc_len >= 3) {
        cout << "/ " << max_asc_start << ":" << max_asc_slope << ":" << max_asc_len << "\n";
    }
    if (max_dsc_len >= 3) {
        cout << "\\ " << max_dsc_start << ":" << max_dsc_slope << ":" << max_dsc_len << "\n";
    }

    return 0;
}
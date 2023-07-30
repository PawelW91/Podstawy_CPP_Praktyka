#include <iostream>
#include <vector>

using namespace std;

vector<int> find_optimal_clock_setting(int k, vector<int>& clock) {
    vector<int> correct_setting(k);
    for (int i = 0; i < k; ++i) {
        correct_setting[i] = i + 1;
    }

    int start_index = 0;
    for (int i = 0; i < k; ++i) {
        if (clock[i] == correct_setting[0]) {
            start_index = i;
            break;
        }
    }

    vector<int> adjusted_clock;
    for (int i = start_index; i < k; ++i) {
        adjusted_clock.push_back(clock[i]);
    }
    for (int i = 0; i < start_index; ++i) {
        adjusted_clock.push_back(clock[i]);
    }

    return adjusted_clock;
}

int main() {
    int d;
    cin >> d;

    for (int i = 0; i < d; ++i) {
        int k;
        cin >> k;
        vector<int> clock(k);
        for (int j = 0; j < k; ++j) {
            cin >> clock[j];
        }

        vector<int> result = find_optimal_clock_setting(k, clock);

        for (int j = 0; j < k; ++j) {
            cout << result[j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

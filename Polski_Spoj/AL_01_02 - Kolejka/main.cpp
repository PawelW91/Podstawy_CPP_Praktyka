#include <iostream>
#include <deque>

using namespace std;

int main() {
    int ile;
    cin >> ile;

    while (ile--) {
        string x;
        cin >> x;

        deque<char> result;

        for (char c : x) {
            while (!result.empty() && c > result.back()) {
                result.pop_back();
            }
            result.push_back(c);
        }

        for (char c : result) {
            cout << c;
        }

        cout << endl;
    }

    return 0;
}

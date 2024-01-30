#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);  // Faster input/output

    int ile;
    cin >> ile;

    while (ile--) {
        string x, y;
        cin >> x;
        y.reserve(x.length());  // Reserve memory for y
        y.push_back(x.back());
        char lider = x.back();

        for (int i = x.length() - 1; i >= 0; i--) {
            if (lider <= x[i - 1]) {
                lider = x[i - 1];
                y.push_back(lider);
            }
        }

        for (int i = y.length() - 1; i >= 0; i--) {
            cout << y[i];
        }

        cout << '\n';  // Use '\n' instead of endl
    }

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;
const int MAX = 10;
const int SZEROKOSC = 30;

int main() {
    int tablica[2 * MAX + 1] = {0};
    int maksimum = 0;

    int liczba;
    while (cin >> liczba) {
        if (liczba >= -MAX && liczba <= MAX)
            tablica[liczba + MAX]++;
    }

    for (int i = -MAX; i <= MAX; ++i) {
        maksimum = max(maksimum, tablica[i + MAX]);
    }

    for (int i = -MAX; i <= MAX; ++i) {
        cout << i << ":|";

        double procent = static_cast<double>(tablica[i + MAX]) / maksimum;
        int ile = static_cast<int>(round(SZEROKOSC * procent));

        for (int j = 1; j <= SZEROKOSC; ++j) {
            cout << (j <= ile ? '*' : ' ');
        }
        cout << '|' << endl;
    }

    return 0;
}

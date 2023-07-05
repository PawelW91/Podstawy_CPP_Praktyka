#include <iostream>
#include <map>
using namespace std;

void zliczacz_liter() {
    int n;
    cin >> n;  // wczytanie liczby wierszy tekstu

    map<char, int> litera_wystapienia;

    // inicjalizacja mapy wyst¹pieñ liter
    for (int i = 0; i < 26; i++) {
        litera_wystapienia['a' + i] = 0;
        litera_wystapienia['A' + i] = 0;
    }

    // przetwarzanie wierszy tekstu
    cin.ignore();  // ignorowanie znaku nowej linii po wczytaniu liczby wierszy
    for (int i = 0; i < n; i++) {
        string wiersz;
        getline(cin, wiersz);
        for (int j = 0; j < wiersz.length(); j++) {
            char znak = wiersz[j];
            if (isalpha(znak)) {
                litera_wystapienia[znak]++;
            }
        }
    }

    // wypisanie wyników
    for (int i = 0; i < 26; i++) {
        char litera = 'a' + i;
        if (litera_wystapienia[litera] > 0) {
            cout << litera << " " << litera_wystapienia[litera] << endl;
        }
    }
    for (int i = 0; i < 26; i++) {
        char litera = 'A' + i;
        if (litera_wystapienia[litera] > 0) {
            cout << litera << " " << litera_wystapienia[litera] << endl;
        }
    }
}

int main() {
    zliczacz_liter();
    return 0;
}

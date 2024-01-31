#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

string formatTime(int godzina, int minuta) {
    stringstream ss;
    ss << setfill('0') << setw(2) << godzina << ":" << setw(2) << minuta;
    return ss.str();
}

vector<string> generuj_dzwonki(string godzina_startu, vector<int> przerwy) {
    vector<string> dzwonki;
    int godzina = stoi(godzina_startu.substr(0, 2));
    int minuta = stoi(godzina_startu.substr(3, 2));

    dzwonki.push_back(godzina_startu);
    for (int przerwa : przerwy) {
        minuta += 45;
        godzina += minuta / 60;
        minuta %= 60;

        godzina %= 24;

        dzwonki.push_back(formatTime(godzina, minuta));

        minuta += przerwa;
        godzina += minuta / 60;
        minuta %= 60;

        godzina %= 24;

        dzwonki.push_back(formatTime(godzina, minuta));
    }

    // Dodaj jeszcze jeden wynik zwiekszony o 45 minut po ostatnim dzwonku
    minuta += 45;
    godzina += minuta / 60;
    minuta %= 60;

    godzina %= 24;

    dzwonki.push_back(formatTime(godzina, minuta));

    return dzwonki;
}

int main() {
    string godzina_startu;
    vector<int> przerwy;

    // Wczytanie danych wejściowych
    cin >> godzina_startu;
    int przerwa;
    while (cin >> przerwa) {
        przerwy.push_back(przerwa);
    }

    // Generowanie dzwonków
    vector<string> dzwonki = generuj_dzwonki(godzina_startu, przerwy);

    // Wyświetlanie wyników
    for (size_t i = 0; i < dzwonki.size(); ++i) {
        cout << dzwonki[i];
        if (i < dzwonki.size() - 1) {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}

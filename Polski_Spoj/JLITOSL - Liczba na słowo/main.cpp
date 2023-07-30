#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> jednosci = {"", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec"};
vector<string> dziesiatki = {"", "dziesiec", "dwadziescia", "trzydziesci", "czterdziesci", "piecdziesiat", "szescdziesiat", "siedemdziesiat", "osiemdziesiat", "dziewiecdziesiat"};
vector<string> nascie = {"dziesiec", "jedenascie", "dwanascie", "trzynascie", "czternascie", "pietnascie", "szesnascie", "siedemnascie", "osiemnascie", "dziewietnascie"};
vector<string> setki = {"", "sto", "dwiescie", "trzysta", "czterysta", "piecset", "szescset", "siedemset", "osiemset", "dziewiecset"};
vector<string> jednostki = {"", "tys.", "mln.", "mld.", "bln."};

string liczba_na_slowo(long long liczba) {
    if (liczba == 0) {
        return "zero";
    }

    string slowo;
    int jednostka_index = 0;

    while (liczba > 0) {
        int grupa = liczba % 1000;
        liczba /= 1000;

        string slowo_grupy;

        int setki = grupa / 100;
        int dziesiatki = (grupa / 10) % 10;
        int jednosci = grupa % 10;

        if (setki > 0) {
            slowo_grupy += ::setki[setki]+" ";
        }

        if (dziesiatki == 1) {
            slowo_grupy += ::nascie[jednosci]+" ";
        } else {
            slowo_grupy += ::dziesiatki[dziesiatki]+" ";
            slowo_grupy += ::jednosci[jednosci]+" ";
        }

        if (grupa > 0) {
            slowo_grupy += ::jednostki[jednostka_index]+" ";
        }

        slowo = slowo_grupy + slowo;
        jednostka_index++;
    }

    return slowo;
}

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        long long liczba;
        cin>>liczba;
        cout<<liczba_na_slowo(liczba)<<endl;
    }
    return 0;
}

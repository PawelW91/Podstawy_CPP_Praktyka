#include <iostream>

using namespace std;

class pytanie
{
    public:
        string tresc;
        string a,b,c,d;
        string odp_poprawna;
        string odp_gracza;
        int nr_pytania;
        int punkt; //1 lub 0;

        void wczytaj();     //wczytaj dane z pliku
        void zadaj();       //pokazuje pytanie, czyta odpowiedzi
        void sprawdz();     //sprawdza poprawnosc odpowiedzi

};

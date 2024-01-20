#include <iostream>
using namespace std;
class Zwierze
{
    public:
    //atrybuty
    string gatunek;
    string imie;
    int wiek;

    //metody
    void dodaj_zwierze()
    {
        cout<<"Dodawanie nowego zwierzaka do bazy: "<<endl;
        cout<<"Podaj gatunek: ";
        cin>>gatunek;
        cout<<"Podaj imie: ";
        cin>>imie;
        cout<<"Podaj wiek: ";
        cin>>wiek;
    }
    void daj_glos()
    {
        if(gatunek=="kot")              cout<<imie<<" "<<wiek<<" lat"<<": Miau!";
        else if(gatunek=="koza")        cout<<imie<<" "<<wiek<<" lat"<<": Beee!";
        else if(gatunek=="krowa")       cout<<imie<<" "<<wiek<<" lat"<<": Muuuu!";
        else                            cout<<"Nieznany gatunek, moze nawet UFO?";
    }
};
class Samochod
{
    public:
        string marka,model,przebieg;
        int rocznik;

    void wczytaj()
    {
        cout<<"Dodawanie nowego autka do bazy: "<<endl;
        cout<<"Podaj marke: ";
        cin>>marka;
        cout<<"Podaj model: ";
        cin>>model;
        cout<<"Podaj rocznik: ";
        cin>>rocznik;
        cout<<"Podaj przebieg: ";
        cin>>przebieg;
    }
    void wypisz()
    {
        cout<<"Marka: "<<marka<<endl<<"Model: "<<model<<endl<<"Rocznik: "<<rocznik<<endl<<"Przebieg: "<<przebieg<<endl;
    }


};
int main()
{
    /*
    Zwierze z1,z2,z3;
    z1.dodaj_zwierze();
    z2.dodaj_zwierze();
    z3.dodaj_zwierze();

    z1.daj_glos();
    cout<<endl;
    z2.daj_glos();
    cout<<endl;
    z3.daj_glos();
    cout<<endl;
    */
    Samochod s1,s2;
    s1.wczytaj();
    s2.wczytaj();
    cout<<endl;
    s1.wypisz();
    cout<<endl;
    s2.wypisz();

    return 0;
}

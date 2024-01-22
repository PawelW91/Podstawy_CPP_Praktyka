#include <iostream>
#include "pytanie.h"
#include <fstream>
#include <cstdlib>
#include <cctype>


using namespace std;

    void pytanie::wczytaj()     //wczytaj dane z pliku
    {
        fstream plik;
        plik.open("quiz — kopia1.txt",ios::in);
        if(plik.good()==false)
        {
            cout<<"Nie udalo sie otworzyc pliku! ;(";
            exit(0);
        }
        int nr_linii=(nr_pytania-1)*6+1;
        int aktualny_nr=1;
        string linia;
        while(getline(plik,linia))
        {
            if(aktualny_nr==nr_linii)           tresc=linia;
            if(aktualny_nr==nr_linii+1)         a=linia;
            if(aktualny_nr==nr_linii+2)         b=linia;
            if(aktualny_nr==nr_linii+3)         c=linia;
            if(aktualny_nr==nr_linii+4)         d=linia;
            if(aktualny_nr==nr_linii+5)         odp_poprawna=linia;
            aktualny_nr++;
        }
        plik.close();
    }

    void pytanie::zadaj()       //pokazuje pytanie, czyta odpowiedzi
    {
        cout<<endl<<tresc<<endl;
        cout<<"a)"<<a<<endl;
        cout<<"b)"<<b<<endl;
        cout<<"c)"<<c<<endl;
        cout<<"d)"<<d<<endl;
        cout<<"------------------------------"<<endl;
        cout<<endl<<"Odpowiedz: ";
        cin>>odp_gracza;
        for (char &c : odp_gracza) {
        c = tolower(c);
    }
    }

    void pytanie::sprawdz()     //sprawdza poprawnosc odpowiedzi
    {
        if(odp_poprawna==odp_gracza)
        {
            punkt=1;
        }
        else{punkt=0;}
    }

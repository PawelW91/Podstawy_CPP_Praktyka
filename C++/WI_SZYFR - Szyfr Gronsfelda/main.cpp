#include <iostream>

using namespace std;
//do skonczenia

string szyfruj(string tekst, string klucz)
{
    string tekst_zaszyfrowany;
    int l=klucz.length();
    for(int i=0;i<tekst.length();i++)
    {
        char litera=tekst[i];
        int klucz_cyfra=klucz[i%l]-'0';
        char litery_przesuniete=((litera-'A'+klucz_cyfra)%26)+'A';
        tekst_zaszyfrowany+=litery_przesuniete;
    }
    return tekst_zaszyfrowany;
}

string deszyfruj(string tekst, string klucz)
{
    string tekst_deszyfrowany;
    int l=klucz.length();
    for(int i=0;i<tekst.length();i++)
    {
        char litera=tekst[i];
        int klucz_cyfra=klucz[i%l]-'0';
        char litery_przesuniete=((litera-'A'+klucz_cyfra+26)%26)+'A';
        tekst_deszyfrowany+=litery_przesuniete;
    }
    return tekst_deszyfrowany;
}


int main()
{
    string polecenie,tekst,klucz,wynik;
        cin>>polecenie>>klucz>>tekst;
    if(polecenie=="SZYFRUJ")
    {
        wynik=szyfruj(tekst,klucz);
        cout<<wynik<<endl;
    }
    if(polecenie=="DESZYFRUJ")
    {
        wynik=deszyfruj(tekst,klucz);
        cout<<wynik<<endl;
    }
    return 0;
}


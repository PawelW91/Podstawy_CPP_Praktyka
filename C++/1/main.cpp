#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <algorithm>
#include <string>


using namespace std;

string temat,nick;
string pytanie[5];
string A[5],B[5],C[5],D[5];
string OK[5];
string odp;
int pkt=0;


int main()
{
    int Nr=1;
    string L;
    int NrP=0;

    fstream plik;
    plik.open("quiz.txt",ios::in);

    if(plik.good()==false){cout<<"Plik nie istnieje ;-("; exit(0);}

    while(getline(plik,L))
    {
        switch(Nr)
        {
            case 1: temat=L;            break;
            case 2: nick=L;             break;
            case 3: pytanie[NrP]=L;     break;
            case 4: A[NrP]=L;           break;
            case 5: B[NrP]=L;           break;
            case 6: C[NrP]=L;           break;
            case 7: D[NrP]=L;           break;
            case 8: OK[NrP]=L;          break;
        }
        if(Nr==8){Nr=2; NrP++;}
        Nr++;
    }
    plik.close();

        cout<<temat<<endl<<nick<<endl;
    for (int i=0; i<=4; i++)
    {
        cout<<endl<<pytanie[i]<<endl;
        cout<<"A. "<<A[i]<<endl;
        cout<<"B. "<<B[i]<<endl;
        cout<<"C. "<<C[i]<<endl;
        cout<<"D. "<<D[i]<<endl;
        cout<<"Twoja odpowiedz: ";
        cin>>odp;
        transform(odp.begin(),odp.end(),odp.begin(),::tolower);

        if(odp==OK[i])
        {
            cout<<"Dobrze! Zdobywasz pkt!"<<endl;
            pkt++;
        }else cout<<"Zle! Brak pkt! Poprawna odp to: "<<OK[i]<<endl;
    }
    cout<<"Koniec! Zdobyles: "<<pkt;


    return 0 ;
}

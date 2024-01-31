//WERSJA 2 - PO ŒWIEZYM PODEJŒCIU DO ZADANIA.
#include <iostream>
#include <string>
using namespace std;

int odwracanie_liczby (int X){int X1=0;while (X!=0) {X1=X1*10+X%10;X/=10;} return X1;}  //odwracanie liczby - do sprawdzenia czy jest palindromem.

string czas(int h, int m)   //zamiana inta na czas w formacie HH:MM.
{
    string H,M;
    H=(h<10) ? "0"+to_string(h) : to_string(h);
    M=(m<10) ? "0"+to_string(m) : to_string(m);
    return H+":"+M;
}

int main()
{
    int ile_t;
    cin>>ile_t;
    cin.ignore();
    while(ile_t--)
    {
        string godz;
        int h,m,t,p;
        getline(cin,godz);          //pobranie czasu do zmiennej string.
        h=stoi(godz.substr(0,2));
        m=stoi(godz.substr(3,2));

            while(true){            //zwiêkszanie minut +1, do momentu powstania palindromu.
                m++;
                if(m==60){
                    h=(h+1)%24;
                    m=0;
                }
                t=100*h+m;              //t - zmienna przechowuj¹ca czas w zmiennej int.
                p=odwracanie_liczby(t); //p - int pomoc - do przechowania i porównania odwróconego inta z czasem.
                if(t==p){break;}
            }
        cout<<czas(h,m)<<endl;
    }
    return 0;
}

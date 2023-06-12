#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int liczba, strzal, ile_prob=0;



int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe 1..100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout<< "Zgadnij jaka (To Twoja " <<ile_prob<<"proba):";
        cin>> strzal;

        if(strzal== liczba)
            cout<<"Udalo sie, wygrywasz!(Udalo Ci sie za "<<ile_prob<<"razem.)"<< endl;
        if(strzal <liczba)
            cout<< "Sorka, za malo:<"<<endl;
        if(strzal>liczba)
            cout<< "Niezle, ale lekko za duzo :P"<< endl;
        if(strzal>=101)
            cout<<"Nie grasz wg zasad :X"<< endl;

    }

system("pause");







    return 0;
}

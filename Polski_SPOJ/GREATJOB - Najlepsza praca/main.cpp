#include <iostream>
#include <cstdlib>
#include <ctime>
//TRESC ZADANIA:
//(...)Nie m�g� wi�c wiedzie�, �e przygotowano dok�adnie dwa testy(...)
//(...)Liczba zg�osze� nie gra roli. Bajtazar chce tylko (albo a�), �eby� rozwi�za�(a) to zadanie.(...)
//Wnioskuje ze chodzi o losowe generowanie odpowiedzi, do skutku.
using namespace std;

int main() {
    string x;
    cin>>x;
    srand(time(0));
    int randomResult=rand()%2;
    if (randomResult==0)
        {
            cout<<":)";
        }
    else
        {
            cout<<":(";
        }

    return 0;
}

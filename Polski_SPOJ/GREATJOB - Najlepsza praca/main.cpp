#include <iostream>
#include <cstdlib>
#include <ctime>
//TRESC ZADANIA:
//(...)Nie móg³ wiêc wiedzieæ, ¿e przygotowano dok³adnie dwa testy(...)
//(...)Liczba zg³oszeñ nie gra roli. Bajtazar chce tylko (albo a¿), ¿ebyœ rozwi¹za³(a) to zadanie.(...)
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

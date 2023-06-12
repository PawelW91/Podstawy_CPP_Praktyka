#include <iostream>
#include <cstdlib>
using namespace std;
int nr_mies;
int rok;

int main()
{
    cout << "Podaj nr miesiaca: " << endl;
    if(!(cin >> nr_mies))
    {
        cerr<<"Ej! Gdzie liczba";
        exit(0);

    }



    switch(nr_mies)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        cout << "Ten miesiac ma 31 dni.";
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        cout << "Ten miesiac ma 30 dni.";
        break;
      case 2:
        cout<< "Jaki mamy teraz rok??: ";
        cin >> rok;

        if (((rok%4==0) &&(rok%100!=0))||(rok%400==0))
            cout << "Ten mies ma 29 dni";
        else cout<<"ten mies ma 28d.";
        default: cout<< "Chyba Ci sie cos pomieszalo";
      }
    return 0;
}

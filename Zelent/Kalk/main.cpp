#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
float x,y,wynik;
char wybor;

int main()
{
   while (true)
   {


    cout << endl<<"Podaj 1. liczbe: " << endl;
    cin >> x;
    cout << "Podaj 2. liczbe: " << endl;
    cin >> y;



    cout << "Menu Glowne: " << endl;
    cout << "-----------------" << endl;
    cout << "1. Dodawanie:" << endl;
    cout << "2. Odejmowanie:" << endl;
    cout << "3. Mnozenie:" << endl;
    cout << "4. Dzielenie:" << endl;
    cout << "5. Koniec:" << endl;

    cout << endl;
    wybor = getch();
    switch(wybor)
    {
        case '1':
            {
                cout << "Twoj wynik to: " << x+y;
            }
        break;
        case '2':
            {
                cout << "Twoj wynik to: " << x-y;
            }
        break;
        case '3':
            {
                cout << "Twoj wynik to: " << x*y;
            }
        break;
        case '4':
            if (y == 0)
            {
                cout << "gupi ;o";
            }
            else
            {
                cout << "Twoj wynik to: " << x/y;
            }
        break;
                case 5:
            {
                exit (0);
            }
        break;
        default: cout<< "Gupi XD" << endl;
    }

        getchar(); getchar();
        system("cls");
   }

    return 0;
}

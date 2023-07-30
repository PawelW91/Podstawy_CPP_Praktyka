#include <iostream>

using namespace std;

int main()
{
    string imie;




    cout <<"Jezeli podasz mi swoje imie, to sprobuje odgadnac czy jestes chlopcem czy dziewczynka =) Jak masz na imie??? ";
    cin >> imie;
    int dlugosc=imie.length();
    if (imie[dlugosc-1]=='a'){cout<<"Jestes dziewczynka, prawda?";} else {cout<<"Jestes chlopcem, prawda?";}



    return 0;
}

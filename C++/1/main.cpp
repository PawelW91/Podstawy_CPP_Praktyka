#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>


using namespace std;

    float x,y;
    char W;

int main()
{

    while(true){
    cout<< "Podaj dwie liczby x i y:"<<endl;
    cin>>x>>y;

    cout<<endl<<"Menu Glowne:"<<endl
    <<"-------------------"<<endl
    <<"1. Dodawanie"<<endl
    <<"2. Odejmowanie"<<endl
    <<"3. Mnozenie"<<endl
    <<"4. Dzielenie"<<endl
    <<"5. Zamknij program"<<endl
    <<"Wybierz numer:";
    W=getch();

    switch(W)
    {
        case '1': {cout<<x+y;} break;
        case '2': {cout<<x-y;} break;
        case '3': {cout<<x*y;} break;
        case '4': {if (y==0) {cout<<"Nie da sie przez zero :<";} else {cout<<x/y;}} break;
        case '5': exit(0);break;
        default: cout<<"Nie ma takiej opcji w menu!";
    }
    getchar();getchar();
    system("cls");
    cout<<endl;
    }


    return 0 ;
}

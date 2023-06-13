#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <iomanip>
#include <conio.h>


using namespace std;

    int N;

int main()
{


    cout<< "Podaj numer miesiaca:";
    if (!(cin>>N))
    {
        cerr<<"To nie jest numer miesiaca";
        exit(0);
    }



    switch(N){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"ten mies ma 31 dni";break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"ten mies ma 30 dni";break;
        case 2:
            cout<<"ten mies ma 28 dni";break;
        default: cout<<"zly numer miesiaca";break;
        }



    return 0 ;
}

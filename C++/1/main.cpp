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

int ile;
clock_t start, stop;
double czas;
int main()
{


    cout<<"Ile liczb w tablicy?";
    cin>>ile;

    int *tablica;
    tablica = new int [ile];

    start=clock();
    for (int i=0;i<ile;i++)
    {
        tablica[i]=i;
        tablica[i]+=50;
    }
    stop=clock();

    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Czas bez wskaznika: "<<czas<<endl;

    delete [] tablica;

    int *wskaznik=tablica;
    tablica=new int[ile];

    start=clock();
    for (int i=0;i<ile;i++)
    {
        *wskaznik=i;
        *wskaznik+=50;
        wskaznik++;
    }
    stop=clock();

    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Czas ze wskaznikiem: "<<czas<<endl;

    //Dzis wolne ;-)
    delete [] tablica;


    return 0 ;
}

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

    float cale(float z)    {return z*39.37;}
    float jardy(float z)   {return z*1.0936;}
    float mile(float z)    {return z*0.0621;}
    void miles(float z)    {cout<<z*0.000621;}

int main()
{

    float X;
    char x;
    cout<<"Podaj ile metrow trzeba przekonwertowac: "; cin>>X;
    cout<<"Chcialbys wiedziec ile to jest: "<<endl<<"a) cale"<<endl<<"b) jardy"<<endl<<"c) mile"<<endl;x=getch();
    switch(x){
        case 'a': cout<<cale(X);      break;
        case 'b': cout<<jardy(X);     break;
        case 'c': miles(X);           break;
        default: cout<<"Podales bledny wybor ;-(";}








    return 0 ;
}

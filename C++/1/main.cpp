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


int main()
{
    string I,P,O;
    int L;
    cout<<"Jak masz na imie? ";
    getline(cin,I);
    getline(cin,P);
    O=I+P;
    L=O.length();
    for (int i=0; i<L/2; i++)
    {
        char B;
        B=O[i];
        O[i]=O[L-1-i];
        O[L-1-i]=B;
    }
    cout<<O;

    return 0 ;
}

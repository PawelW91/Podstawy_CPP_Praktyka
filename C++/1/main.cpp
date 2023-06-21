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
    int s=0,x,m=0;
    int T[5],X[5];
    cout<<"Wymien 5 liczb: "; for(int i=0;i<5;i++){cin>>T[i];}

        for(int i=0;i<5;i++)
        {
            s+=T[i];
        }
        s=s/5;

        cout<<"Srednia to: "<<s<<endl;

        for(int i=0;i<5;i++)
        {
            if (abs(s-T[i]))
        }






        cout<<"Najblizsza sredniej to: "<<x;


    return 0 ;
}

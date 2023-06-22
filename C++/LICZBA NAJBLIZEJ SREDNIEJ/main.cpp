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
    float s=0,T[5],m;
    cout<<"Wymien 5 liczb: ";
    for(int i=0;i<5;i++){cin>>T[i];}
    m=T[0];
        for(int i=0;i<5;i++)
        {
            s+=T[i];
        }
        s=s/5;


        cout<<"Srednia to: "<<s<<endl;

    for(int i=1;i<5;i++)
    {
        if((abs(s-m))>(abs(s-T[i])))
           {m=T[i];}
           cout<<m<<endl;
    }

    cout<<"Najblizej sredniej jest: "<<m;



    return 0 ;
}

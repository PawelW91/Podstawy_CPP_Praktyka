#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int ile_t,ile_l,suma;
double sr,x,y,z,szuk;

int main()
{
    cin>>ile_t;
    cout<<endl;

for (int i=0;i<ile_t;i++)
{
    cin>>ile_l;
    float liczby[ile_l];
    suma=0;
    for (int i=0;i<ile_l;i++)
    {
        cin>>liczby[i];
        suma+=liczby[i];
    }
    x=suma;
    y=ile_l;
    sr=x/y;

    float zblizona[ile_l];
    int k;
    z=99;
    for (k=0;k<ile_l;k++)
    {
        zblizona[k]=abs(sr-liczby[k]);
        if (z>zblizona[k]) {z=zblizona[k];szuk=liczby[k];}

    }
    cout<<endl<<szuk<<endl<<endl;

}

    return 0;
}

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
clock_t start,stop,start2,stop2;
double czas,czas2;
long int potega_rekurencja(long p,long w)
{
    if (w==0) return 1;
    else return p*potega_rekurencja(p,w-1);
}
int main()
{

clock_t start,stop,start2,stop2;
double czas,czas2;

start=clock();
long int potega_rekurencja(long p,long w);
stop=clock();
czas=(double)(stop-start)/CLOCKS_PER_SEC;

long long int wynik=1;
int w=13;
int p=3;
start2=clock();
while (w>0)
{

    wynik=wynik*p;
    w--;
}
stop2=clock();
czas2=(double)(stop2-start2)/CLOCKS_PER_SEC;

    cout << "Rekurencja: " << potega_rekurencja (3,13) << " Czas: "<< czas<< endl;
    cout << "Petla: " << wynik << " Czas: "<< czas2<< endl;
    return 0;
}

#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <time.h>

using namespace std;

clock_t start, stop;
double czas;
int ile;

int main()
{

    cout<<"Ile: ";
    cin>>ile;



    int *tablica;
    tablica = new int [ile];



    start=clock();
    for(int i=0;i<ile;i++)
    {
        tablica[i]=i;
        tablica[i]+=50;
    }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Czas bez wskaznika: "<<czas<<endl;
    delete [] tablica;



    start=clock();
    int *w;
    w=new int [ile];
    for(int i=0;i<ile;i++)
    {
        *w=i;
        *w+=50;
        w++;
    }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Czas ze wskaznikiem: "<<czas<<endl;
    delete [] tablica;



    return 0;
}

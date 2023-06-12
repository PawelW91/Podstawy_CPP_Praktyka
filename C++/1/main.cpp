#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include<iomanip>

using namespace std;

    long double F[100000];
    int N,x;

int main()
{

    cout<< "Ile liczb F wyznaczyc:";
    cin>>N;
    cout<<setprecision(10000);
    F[0]=1;
    F[1]=1;
    cout<<"1"<<endl<<"1"<<endl;
    for (int i=2; i<N; i++)
    {
        F[i]=F[i-1]+F[i-2];

    }

    cout<< F[N-1]<<endl;

    return 0 ;
}

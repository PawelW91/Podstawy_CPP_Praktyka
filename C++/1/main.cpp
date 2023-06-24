#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    for(int i=0;i<ile_t;i++)
    {
        int a,b,NWW=1,NWD,MIN;
        cin>>a>>b;

        //NWW - najmniejsza wspolna wielokrotnosc
        //NWD - najwiekszy wspolny dzielnik

        MIN=min(a,b);
        for (int i=1;i<=MIN;i++)
        if(a%i==0 && b%i==0) {NWD=i;}

        if (a==b) {NWW=a;}
        else {NWW=(a*b)/NWD;}

        cout<<NWW<<endl;

    }

    return 0 ;
}

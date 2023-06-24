#include <iostream>
#include <cmath>
using namespace std;

int X (int a,int b){
    while(a!=b){
            if (a>b)    {a-=b;}
            else        {b-=a;}
            }
            return a+b;
    }
int main()
{
    int ile_t;
    int wynik[ile_t];
    cin>>ile_t;
    for(int i=0;i<ile_t;i++)
    {
        int a,b;
        cin>>a>>b;
        wynik[i]=X(a,b);
    }

    for (int i=0;i<ile_t;i++) {
        cout<<wynik[i]<<endl;
    }

    return 0 ;
}

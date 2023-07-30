#include <iostream>
#include <cmath>
using namespace std;

bool czyPierwsza(int a) {
    for (int i=2;i<a;i++)
    {
        if (a%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int ile_t,x;
    cin>>ile_t;
    for(int i=0;i<ile_t;i++)
    {
        cin>>x;
        if (x<2) cout<<endl<<"NIE"<<endl;
        else if (czyPierwsza(x)==true) cout<<endl<<"TAK"<<endl;
        else cout<<endl<<"NIE"<<endl;

    }

    return 0 ;
}

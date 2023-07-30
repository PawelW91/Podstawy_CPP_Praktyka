#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    for(int i=0;i<ile_t;i++)
    {
        int l,d,j,x=1;
        cin>>l;
        if (l>9) cout<<endl<<"0 0"<<endl;
        else
        {   for(int i=1;i<=l;i++)
            {
                x*=i;
            }

        d=(x/10)%10;
        j=x%10;
        cout<<endl<<d<<" "<<j<<endl;
        }
    }

    return 0 ;
}

#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while (ile_t--)
    {
        int X,Y,X1=0,ile=0;
        cin>>X;
        Y=X;
        while (Y!=0) {X1=X1*10+Y%10;Y/=10;}
        if (X==X1){cout<<X<<" "<<ile<<endl;}
            else
                {
                    while(!(X==X1))
                    {
                        ile++;
                        X=X+X1;
                        Y=X;
                        X1=0;
                        while (Y!=0) {X1=X1*10+Y%10;Y/=10;}
                    }
                    cout<<X<<" "<<ile<<endl;
                    ile=0;
                }
    }
    return 0;
}

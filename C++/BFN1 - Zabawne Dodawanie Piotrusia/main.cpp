#include <iostream>

using namespace std;

int odwracanie_liczby (int X){int X1=0; while (X!=0) {X1=X1*10+X%10;X/=10;} return X1;} //Zapis liczby od tylu.

int main()
{
    int ile_t;
    cin>>ile_t;
    while (ile_t--)
    {
        int X,X1,ile=0;
        cin>>X;
        X1=odwracanie_liczby(X);

        if (X==X1){cout<<X<<" "<<ile<<endl;}
            else
                {
                    while(!(X==X1))
                    {
                        ile++;
                        X+=X1;
                        X1=odwracanie_liczby(X);
                    }
                    cout<<X<<" "<<ile<<endl;
                    ile=0;
                }
    }
    return 0;
}

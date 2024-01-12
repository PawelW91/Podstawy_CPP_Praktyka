#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int x,m,k,d;

int main()
{
        cout<<"Ile masz metalu: ";          cin>>m; cout<<endl;
        cout<<"Ile masz krysztalu: ";       cin>>k; cout<<endl;
        cout<<"Ile masz deuteru: ";         cin>>d; cout<<endl;
        m=floor(m/20000.0);
        k=floor(k/7000.0);
        d=floor(d/2000.0);

        x=min({m,k,d});

        if(m<0||k<0||d<0)                   cout<<"Niepoprawne dane!"<<endl;
        else if(x==0)                       cout<<"Nie stac Cie na nowe statki!"<<endl;
        else if(x==1)                       cout<<"Stac Cie na 1 statek!"<<endl;
        else if(x<=4)                       cout<<"Stac Cie na "<<x<<" nowe statki!"<<endl;
        else if(x<=20)                      cout<<"Stac Cie na "<<x<<" nowych statkow!"<<endl;
        else if(x%10==1)                    cout<<"Stac Cie na "<<x<<" nowych statkow!"<<endl;
        else if(x%10<=4)                    cout<<"Stac Cie na "<<x<<" nowe statki!"<<endl;
        else                                cout<<"Stac Cie na "<<x<<" nowych statkow!"<<endl;

   return 0;
}

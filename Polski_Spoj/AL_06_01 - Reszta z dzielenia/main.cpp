#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int a,b,r;
        cin>>a>>b;
        r=a%b;
        if(r<0)             {r+=abs(b);cout<<r<<endl;}
        else                {cout<<r<<endl;}
    }
    return 0;
}

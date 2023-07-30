#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    float a,b,c;
    cin>>ile_t;
    while(cin>>a>>b>>c)
    {
        if(a+b>c&&a+c>b&&b+c>a)     {cout<<"1"<<endl;}
        else                        {cout<<"0"<<endl;}
    }
    return 0;
}

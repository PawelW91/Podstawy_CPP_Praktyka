#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"f(x)=";
    if(a!=0&&abs(a)!=1)     cout<<a<<"x";
    if(a==1)                cout<<"x";
    if(a==-1)               cout<<"-x";
    if(b>0&&a!=0)           cout<<"+"<<b<<endl;
    else if (b!=0)          cout<<b<<endl;
    if(a==0&&b==0)          cout<<0;
    cout<<endl;

    return 0;
}

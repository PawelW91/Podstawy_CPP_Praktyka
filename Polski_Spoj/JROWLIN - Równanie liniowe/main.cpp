#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c,x;
    //ax+b=c
    cin>>a>>b>>c;
    x=(c-b)/a;

    if(a==0 && (c-b)!=0)        {cout<<"BR"<<endl;}
    else if (a==0 && (c-b)==0)  {cout<<"NWR"<<endl;}
    else                        {cout<<fixed<<setprecision(2)<<x<<endl;}

    return 0;
}

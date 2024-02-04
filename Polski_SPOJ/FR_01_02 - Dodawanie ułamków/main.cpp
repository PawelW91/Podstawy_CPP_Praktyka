#include <iostream>
#include <string>
using namespace std;

unsigned long long nwd(unsigned long long a,unsigned long long b)
{
    unsigned long long temp;
    while (b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
    return a;
}

unsigned long long nww(unsigned long long a,unsigned long long b)
{
    return (a*b)/nwd(a,b);
}

int main() {
    unsigned long long l1,m1,l2,m2;
    unsigned long long wm,l3,dz;
    char p;
    cin>>l1>>p>>m1>>l2>>p>>m2;
    wm=nww(m1,m2);
    l3=l1*(wm/m1)+l2*(wm/m2);
    dz=nwd(l3,wm);
    cout<<l1<<"/"<<m1<<" + "<<l2<<'/'<<m2<<" = "<<l3/dz<<"/"<<wm/dz<<endl;
    return 0;
}

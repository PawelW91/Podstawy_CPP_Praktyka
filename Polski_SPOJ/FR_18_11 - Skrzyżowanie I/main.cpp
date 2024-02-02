#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int ileTestow;
    double l,d,a,V,t,x;
    cin>>ileTestow;
    while(ileTestow--)
    {
        cin>>l>>d>>a>>V>>t;
        V=V/3.6;
        x=floor((a*pow(min(V/a,t),2.0)/2.0+V*max(t-V/a,0.0))/(l+d));
        cout<<fixed<<setprecision(0)<<x<<endl;
    }
    return 0;
}

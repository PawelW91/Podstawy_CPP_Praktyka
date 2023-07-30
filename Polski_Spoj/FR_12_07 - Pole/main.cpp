#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int x,y;
        double a,b,p,z,t;
        cin>>x>>y>>a>>b;
        a=(100-a)/100;
        b=(100-b)/100;
        p=x*y;              //powierzchnia starego pola
        z=p*a/b;            //powierzchnia nowego pola

        t=abs(((x+y)-sqrt((x*x)+(2*x*y)+(y*y)+(4*z)-(4*p)))/2);
        cout<<fixed<<setprecision(4)<<t<<endl;
    }
    return 0;
}



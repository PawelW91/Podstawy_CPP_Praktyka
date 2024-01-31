#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int ile_t;
    double pi=M_PI;
    cin>>ile_t;
    while(ile_t--)
    {
        long long R;
        double X;
        int L;
        cin>>R>>L;
        X=pi*R;                 //obw pizzy
        X/=L;                   //co ile przeciac
        if(L%2==0){L/=2;cout<<fixed<<setprecision(3)<<X<<" "<<setprecision(0)<<L<<endl;}
        else {X/=2; cout<<fixed<<setprecision(3)<<X<<" "<<setprecision(0)<<L<<endl;}
    }
    return 0;
}

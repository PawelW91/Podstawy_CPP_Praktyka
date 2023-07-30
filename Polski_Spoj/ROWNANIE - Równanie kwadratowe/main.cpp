#include <iostream>
#include <cmath>
using namespace std;

double X (double a,double b,double c){

        double y=b*b-4*a*c;
        if (y>0) return 2;
        else if (y==0) return 1;
        else return 0;
    }

int main()
{
    double a,b,c;
    while (cin>>a>>b>>c){

        double x=X(a,b,c);
        cout<<x<<endl;
    }

    return 0 ;
}

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double ile_t,x,y,z,s;

    cin>>ile_t;
    while(ile_t--)
    {
    	cin>>x>>y>>z;
    	//s=abs(12*(x+y-y*z)/(z-1));
    	s=(x+y-z*y)*-12/(z-1.0);
    	cout<<int(s+0.5)<<endl;
    }

    return 0 ;
}



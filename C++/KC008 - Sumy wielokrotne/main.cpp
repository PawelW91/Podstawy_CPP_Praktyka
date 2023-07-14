#include <iostream>

using namespace std;

int main()
{
    long long int x,y=0,z=0;
    while(cin>>x)
    {
        if(x!=0)y=y+x;
        else {z=z+y;cout<<y<<endl;y=0;}

    }
    cout<<z<<endl;
    return 0;
}

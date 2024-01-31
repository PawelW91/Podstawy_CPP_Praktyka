#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x0,y0,r,ile_t;
    cin>>x0>>y0>>r>>ile_t;
    while(ile_t--)
    {
        int x,y;
        double odp;
        cin>>x>>y;
        odp=sqrt(pow((x0-x),2)+pow((y0-y),2));
        if(odp==r)      {cout<<"E"<<endl;}
        else if(odp>r)  {cout<<"O"<<endl;}
        else            {cout<<"I"<<endl;}
    }
    return 0;
}

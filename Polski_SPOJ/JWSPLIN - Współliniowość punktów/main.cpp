#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int x[3],y[3];
        for(int i=0;i<3;i++)                {cin>>x[i]>>y[i];}

        double AB,BC,AC;
        //A=x[0],y[0]
        //B=x[1],y[1]
        //C=x[2],y[2]
        AB=sqrt(pow((x[0]-x[1]),2)+pow((y[0]-y[1]),2));
        BC=sqrt(pow((x[1]-x[2]),2)+pow((y[1]-y[2]),2));
        AC=sqrt(pow((x[0]-x[2]),2)+pow((y[0]-y[2]),2));
        if(AB==(AC+BC)||AB==abs((AC-BC)))   {cout<<"TAK"<<endl;}
        else                                {cout<<"NIE"<<endl;}
    }
    return 0;
}

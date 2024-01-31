#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        double x,y,r,x1,y1,r1,x2,y2,r2,D;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        if(r2>r1)       //r1 zawsze wiekszy
        {
            x=x1;y=y1;r=r1;
            x1=x2;y1=y2;r1=r2;
            x2=x;y2=y;r2=r;
            x=0;y=0;r=0;
        }
        x=abs(x1-x2);
        y=abs(y1-y2);
        D=sqrt((x*x)+(y*y));
        if(D>=r1+r2)
        {
            r=0;

        }
        else
        {
            if (D>r1)
            {
                r=D-(D-r2)-(D-r1);

            }
            else if (D==r1)
            {
                r=r2;
            }
            else if(D<=abs(r1-r2))
            {
                r=2*r2;
            }

            else
                {
                    r=r2+(r1-D);
                }
            }
            cout<<fixed<<setprecision(2)<<r<<endl;
        }
    return 0;
}

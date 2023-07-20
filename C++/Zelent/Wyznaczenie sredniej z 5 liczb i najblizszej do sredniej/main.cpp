#include <iostream>
using namespace std;

int main()
{
    bool bylo=false;
    float x[5],y[5],s=0,z,t,ile=0;
    for (int i=0;i<5;i++)
    {
        cin>>x[i];
        s+=x[i];
    }
    s=s/5;

        for (int i=0;i<5;i++)
        {
            y[i]=abs(s-x[i]);
        }
        z=y[0];
        t=x[0];
        for (int i=1;i<5;i++)
        {
            if(z>y[i]){z=y[i];t=x[i];}
        }
        for (int i=0;i<5;i++)
        {
            if(z==y[i]&&x[i]!=t)
            {
                ile++;
                if(ile>0)
                {
                    cout<<"Srednia z 5 liczb to: "<<s<<endl<<"Liczba najbardziej zblizona do sredniej to: "<<t<<" i "<<x[i]<<endl;
                    bylo=true;
                }
            }
        }
        if (bylo==false) cout<<"Srednia z 5 liczb to: "<<s<<endl<<"Liczba najbardziej zblizona do sredniej to: "<<t<<endl;


    return 0;
}

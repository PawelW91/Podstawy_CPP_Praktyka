#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int ile;
        cin>>ile;
        int k=0,z=0,x=0,y=0;
        for (int i=0;i<ile;i++)
        {
            cin>>k>>z;
            if (k==0){y+=z;}
            if (k==1){y-=z;}
            if (k==2){x-=z;}
            if (k==3){x+=z;}
        }

        if (x==0 && y==0)       cout<<"studnia"<<endl;
        if (x==0 && y>0)        cout<<0<<" "<<y<<endl;
        if (x==0 && y<0)        cout<<1<<" "<<abs(y)<<endl;

        if (x>0 && y==0)        cout<<3<<" "<<x<<endl;
        if (x<0 && y==0)        cout<<2<<" "<<abs(x)<<endl;

        if (x>0 && y>0)        {cout<<0<<" "<<y<<endl<<3<<" "<<x<<endl;}
        if (x>0 && y<0)        {cout<<1<<" "<<abs(y)<<endl<<3<<" "<<x<<endl;}

        if (x<0 && y<0)        {cout<<1<<" "<<abs(y)<<endl<<2<<" "<<abs(x)<<endl;}
        if (x<0 && y>0)        {cout<<0<<" "<<y<<endl<<2<<" "<<abs(x)<<endl;}

        k=0;
        z=0;
        x=0;
        y=0;
    }
    return 0;
}

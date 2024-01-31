#include <iostream>

using namespace std;

int zera(int n) {
    int count=0;
    while (n>=5){
        n/=5;
        count+=n;
    }
    return count;
}

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int x;
        cin>>x;
        if(x<=4)        {cout<<0<<endl;}
        else if(x<=9)   {cout<<1<<endl;}
        else if(x<=14)  {cout<<2<<endl;}
        else if(x<=19)  {cout<<3<<endl;}
        else if(x==20)  {cout<<4<<endl;}
        else{
            cout<<zera(x)<<endl;
        }

    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long x;
    cin>>x;
    if(x==0)                    cout<<1<<endl;
    else if(x%4==1)             cout<<2<<endl;
    else if(x%4==2)             cout<<4<<endl;
    else if(x%4==3)             cout<<8<<endl;
    else                        cout<<6<<endl;

    return 0;
}

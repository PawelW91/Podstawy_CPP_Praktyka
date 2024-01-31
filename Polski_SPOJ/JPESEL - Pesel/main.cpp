#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        string p;
        int s,x;
        cin>>p;

        s=1*p[0]+3*p[1]+7*p[2]+9*p[3]+1*p[4]+3*p[5]+7*p[6]+9*p[7]+1*p[8]+3*p[9]+1*p[10];
        if(s%10==0) cout<<"D"<<endl;
            else cout<<"N"<<endl;
    }
    return 0;
}

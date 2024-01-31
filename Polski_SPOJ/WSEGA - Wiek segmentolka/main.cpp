#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int x,ile,nogi;
        cin>>x;
        int seg[x];
        for(int i=0;i<x;i++)        {cin>>seg[i];nogi+=seg[i];}
        ile=x-1+nogi;
        cout<<ile<<endl;
        ile=0;
        nogi=0;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int p=y;
    int t[x],mem[y];
    for(int i=0;i<x;i++)    {cin>>t[i];}
    for(int j=0;j<y;j++)    {mem[j]=t[j];}
    for(int i=y;i<x;i++)    {t[i-y]=t[i];}
    for(int z=0;z<y;z++)    {t[x-z-1]=mem[p-1];p--;}
    for(int i=0;i<x;i++)    {cout<<t[i]<<" ";}
    cout<<endl;
    return 0;
}

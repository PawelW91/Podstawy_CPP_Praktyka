#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin>>ile;
    int x[ile];
    for(int i=0;i<ile;i++)  {cin>>x[i];}
    char znak;
    int nr;
    cin>>znak>>nr;
    if (znak=='>')
    {
        for(int i=0;i<ile;i++)  {if(x[i]>nr)    cout<<x[i]<<endl;}
    }
    if (znak=='<')
    {
        for(int i=0;i<ile;i++)  {if(x[i]<nr)    cout<<x[i]<<endl;}
    }
    return 0;
}

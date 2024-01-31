#include <iostream>

using namespace std;

int main()
{
    int ile_w,ile_t;
    cin>>ile_w>>ile_t;
    while(ile_t--)
    {
        long long suma=0;
        int x[ile_w];
        int y[ile_w];
        for(int i=0;i<ile_w;i++)    {cin>>x[i];}
        for(int i=0;i<ile_w;i++)    {cin>>y[i];}
        for(int i=0;i<ile_w;i++)
        {
            suma+=abs(x[i]-y[i]);
        }
        cout<<suma<<endl;
    }
    return 0;
}

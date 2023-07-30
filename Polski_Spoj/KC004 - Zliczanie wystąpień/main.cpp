#include <iostream>

using namespace std;

int main()
{
    int x;
    while(cin>>x)
    {
        int y,ile=0;
        cin>>y;
        int tab[y];
        for (int i=0;i<y;i++)       {cin>>tab[i];}
        for (int i=0;i<y;i++)       {if(tab[i]==x){ile++;}}
        cout<<ile<<endl;
    }
    return 0;
}

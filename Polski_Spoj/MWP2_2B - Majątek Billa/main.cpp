#include <iostream>

using namespace std;

int wynik(int u, int s, int d)
{
    int x=1;
    u=u%d;
    while (s>0)
    {
        if (s%2==1)
        {
            x=(x*u)%d;
        }
        s/=2;
        u=(u*u)%d;
    }
    return x;
}

int main()
{
    int u,s,d;
    while(cin>>u>>s>>d)
    {
        if(u==0&&s==0&&d==0)  {break;}      //wazne, aby ta liniia by³a pierwsza - jezeli bedzie druga, to najpierw wykona sie funkcja wynik(), gdzie zachodzi operacja dzielenia, a poniewaz nie ma dzielenia przez zero, to program sie wysypie.
        cout<<wynik(u,s,d)<<endl;
    }
    return 0;
}

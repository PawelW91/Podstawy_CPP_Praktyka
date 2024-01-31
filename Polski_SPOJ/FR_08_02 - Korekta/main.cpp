#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    int x[6];
    while(ile_t--)
    {
        int w=0,p=0,gry=0;
        for(int i=0;i<6;i++)
        {
            cin>>x[i];
            if(i%2==0)  {w+=x[i];}
            else        {p+=x[i];}
            gry=(w+p)/3;
            gry=2*gry;
        }
        cout<<gry-w<<" "<<gry-p<<endl;
    }
    return 0;
}

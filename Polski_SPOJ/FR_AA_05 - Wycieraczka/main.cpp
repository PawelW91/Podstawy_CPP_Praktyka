#include <iostream>

using namespace std;

int main()
{
    int a,r,ile,x,y,wynik=0;
    cin>>a>>r>>ile;
    while(ile--)
    {
        cin>>x>>y;
        x=a-x;

        if((r*r)<(x*x)+(y*y))       // Jezeli promien wycieraczki jest mniejszy niz punkt w ktorym jest owad, to go nie wyczysci.
        {
            wynik+=1;
        }
    }

    cout<<wynik<<endl;

    return 0;
}

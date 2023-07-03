#include <iostream>

using namespace std;

int main()
{
    int ile_t,l;
    cin>>ile_t;
    string x;
    while(ile_t--)
    {
        cin>>x;
        l=x.length()/2;
        x.erase(l,l);
        cout<<x<<endl;
    }
    return 0;
}

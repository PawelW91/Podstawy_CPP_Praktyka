#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin>>ile;
    string x,y;
    while(ile--)
    {
        bool ok=true;
        cin>>x>>y;

        if(x.length()==y.length())
        {
            for(int i=0;i<x.length();i++)
            {
                if(x[i]!=y[i]&&y[i]!='*')
                {
                    ok=false;
                    break;
                }
            }
        }
        else {ok=false;}
        if(ok)              {cout<<"ok"<<endl;}
        else                {cout<<"error"<<endl;}
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    char y;
    string x;
    while(cin>>y)
    {
        cin>>x;
        x.length();
        for(int i=0;i<x.length();i++)
        {
            if(x[i]!=y)
            {
                cout<<x[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

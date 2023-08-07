#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++)
    {
        if (x[i] == '_')
        {
            x[i+1]=toupper(x[i+1]);
            x.erase(i,1);
        }
    }
    cout<<x<<endl;
    return 0;
}

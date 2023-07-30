#include <iostream>

using namespace std;

int main()
{
    string x;
    while(cin>>x)
    {
        for(int i=x.length()-1;i>=0;i--)    {cout<<x[i];}
        cout<<endl;
    }
    return 0;
}

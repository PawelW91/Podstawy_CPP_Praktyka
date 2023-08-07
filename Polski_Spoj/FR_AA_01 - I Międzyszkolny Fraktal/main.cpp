#include <iostream>

using namespace std;

int main()
{
    int x[2],ile;
    for(int i=0;i<4;i++)
    {
        cin>>x[0]>>x[1];
        ile=ile+x[0]-x[1];
    }
    cout<<ile<<endl;
    return 0;
}

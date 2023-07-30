#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>x>>y;
    n=y-x;
    for (int i=0;i<=n;i++)
    {
    if  (x%6==0) cout<<"ab";
    if ((x%2==0)&&(x%3!=0)) cout<<"a";
    if ((x%3==0)&&(x%2!=0)) cout<<"b";
    x=x+1;
    }
    return 0;
}

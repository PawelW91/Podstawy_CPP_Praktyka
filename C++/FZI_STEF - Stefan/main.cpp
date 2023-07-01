#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin>>ile;
    int X[ile];
    long long curSum=0,maxSum=0;
    for (int i=0;i<ile;i++)
    {
        cin>>X[i];
    }
    for (int i=0;i<ile;i++)
    {
        curSum+=X[i];
        if (curSum>maxSum){maxSum=curSum;}
        if (curSum<0){curSum=0;}
    }
    cout<<maxSum<<endl;
    return 0;
}

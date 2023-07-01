#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ile,X;
    cin>>ile;
    long long curSum=0,maxSum=0;
    while(ile--)
    {
        cin>>X;
        curSum+=X;
        if (curSum>maxSum){maxSum=curSum;}
        if (curSum<0){curSum=0;}
    }
    cout<<maxSum<<'\n';

    return 0;
}

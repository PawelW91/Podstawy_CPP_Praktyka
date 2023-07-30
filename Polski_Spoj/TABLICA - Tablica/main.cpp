#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int X;
    vector<int> Y;
    while (cin>>X)
    {
        Y.push_back(X);
    }
    for (int i=Y.size()-1;i>=0;i--)
    {
        cout<<Y[i]<<" ";
    }
    cout<<endl;

    return 0;
}

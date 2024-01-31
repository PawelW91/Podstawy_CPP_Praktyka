#include <iostream>

using namespace std;

int main()
{
    int t,n,x,z;

    cin>>t;
    for (int i=0; t>i; i++){
        cin>>n;
        for (int j=0; n>j;j++){
        cin>>x;
        z+=x;}
        cout<<z<<endl;
        z=0;
    }

    return 0;
}

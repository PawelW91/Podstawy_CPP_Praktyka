#include <iostream>

using namespace std;

int main()
{
    int n,x;
    string s1,s2,z;

    cin>>n;

    cin>>s1;


    x=n/2;
    s2=s1;
    for (int i=0;i<n;i++){s2[i]='.';}
    z=s1[x];
    s2.replace(x,1,z);

    int j;
    for (int j=0; j<x+1;j++){
        s2[x+j]=s1[x+j];
        s2[x-j]=s1[x-j];
        cout<<s2<<endl;}

    return 0;
}

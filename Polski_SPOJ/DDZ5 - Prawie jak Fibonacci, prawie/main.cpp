#include <iostream>

using namespace std;

int main()
{
    int ile,odp=0;
    cin>>ile;
    int x[ile];
    for(int i=0;i<ile;i++) {cin>>x[i];}
    for(int i=2;i<ile;i++) {if(x[i-2]+x[i-1]==x[i]){odp+=1;}}
    cout<<odp<<endl;
    return 0;
}

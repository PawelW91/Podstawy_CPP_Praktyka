#include <iostream>

using namespace std;

int main()
{
    int x,odp=0;
    cin>>x;
    int y[x];
    cin>>y[0]>>y[1];
    for(int i=2;i<x;i++)
    {
        cin>>y[i];
        if(y[i-2]<y[i-1]&&y[i-1]>y[i])
        {
            odp+=1;
        }
    }
    cout<<odp<<endl;
    return 0;
}

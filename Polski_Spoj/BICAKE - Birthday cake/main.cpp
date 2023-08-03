#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n;
    while(cin>>n){
        long long int x1=0,x=0;
        do
        {
            x=0;
            x1+=1;
            x=((x1*(x1+1))/2)+1;

        }while(x<n);
        if(n==1 || n==0)    cout<<"0"<<endl;
        else                cout<<x1<<endl;
    }
    return 0;
}

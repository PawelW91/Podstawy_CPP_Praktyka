#include <iostream>

using namespace std;


int main()
{
    int x;
cin>>x;
if (x==0) {cout<<"0";}
else if (x==3){cout<<"2 0 3 1";}
else if (x==4){cout<<"0 3 1 4 2";}
else if(x==2||x==1){cout<<"NIE";}
else {
for(int i=0;i<=x/2;i++)
cout<<2*i<<" ";
for(int i=0;i<x/2;i++)
cout<<2*i+1<<" ";
}
if(x%2!=0)
{
if(x>3){
cout<<x;}
}

cout<<endl;

    return 0;
}

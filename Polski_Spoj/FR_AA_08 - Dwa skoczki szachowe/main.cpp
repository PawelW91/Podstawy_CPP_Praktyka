#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char x,y;
    cin>>x>>a>>y>>b;
    if((x+1==y||x-1==y)&&(a+2==b||a-2==b)||(x+2==y||x-2==y)&&(a+1==b||a-1==b))
    {
        cout<<"TAK"<<endl;
    }
    else {cout<<"NIE"<<endl;}
    return 0;
}

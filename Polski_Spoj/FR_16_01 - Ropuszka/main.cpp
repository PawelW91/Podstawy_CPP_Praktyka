#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a,b,n;

    while (cin>>a>>b>>n){
        if (n==33) {cout<<"WRACAJ"<<endl;}
            else if (a>b) {cout<<"W PRAWO"<<endl;}
                else cout<<"W LEWO"<<endl;
    }
    return 0 ;
}

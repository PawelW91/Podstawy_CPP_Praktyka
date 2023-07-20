#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
    int a=2;
    cout<<a<<endl;
    int b=++a;
    cout<<b<<endl;
    int c=++b;
    cout<<c<<endl;
    a=b*c;
    cout<<a<<endl;


    return 0;
}

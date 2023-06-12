#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <time.h>

using namespace std;
float srednia(float &a, float &b, float&c)
{

    return (a+c+b)/3;

}


int main()
{
    float a,b,c;
    a=1.5;
    b=2.3;
    c=0.75;

    cout<<"Srednia wynosi: "<<srednia(a,b,c);




    return 0;
}

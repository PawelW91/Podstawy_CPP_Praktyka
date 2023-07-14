#include <iostream>

using namespace std;

int main()
{
    string x;
    while(getline(cin,x))
    {
        for(int i=0;i<x.length();i++)
        {
            if(x[i]>87)     // kody ASCII, 87 to W, 88 to X, 89 to Y, 90 to Z
                {
                    if(x[i] == 'X')         {x[i] = 'A';}
                    if(x[i] == 'Y')         {x[i] = 'B';}
                    if(x[i] == 'Z')         {x[i] = 'C';}
                }
            else if(x[i]>64)                {x[i]=x[i]+3;}  // od 65 zaczyna sie A
        }
        for(int i=0;i<x.length();i++)   {cout<<x[i];}
        cout<<endl;
    }
    return 0;
}

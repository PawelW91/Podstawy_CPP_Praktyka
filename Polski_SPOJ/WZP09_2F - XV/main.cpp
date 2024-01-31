#include <iostream>

using namespace std;

int main()
{
    string x;

    while(getline(cin,x) && x!="0")
    {
        int sum=0,y;
        for(int i=0;i<x.length();i++)
        {
            sum+=x[i]-'0';
        }
        y=x[x.length()-1]-'0';
        if(sum%3==0 && y%5==0)      {cout<<"TAK"<<endl;}
        else                        {cout<<"NIE"<<endl;}
    }
    return 0;
}

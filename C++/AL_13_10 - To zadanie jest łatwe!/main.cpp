#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    cin.ignore();
    while(ile_t--)
    {
        string x,y,z;
        int ile=0;
        getline(cin,x);
        size_t pozycja=x.find(' ');
        for(int i=pozycja+1;i<x.length();i++)
        {
            z+=x[i];
        }
        for(int i=0;i<x.length();i++)
        {
            if(x[i]==' ') break;
            y+=x[i];
        }
        for(int i=0;i<y.length();i++)
        {
            if(z[ile]==y[i]){ile++;}
        }
        if(ile==z.length())     {cout<<"Tak"<<endl;}
        else                    {cout<<"Nie"<<endl;}
    }
    return 0;
}

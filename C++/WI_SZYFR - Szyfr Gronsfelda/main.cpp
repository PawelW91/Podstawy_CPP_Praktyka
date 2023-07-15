#include <iostream>

using namespace std;
//do skonczenia
int main()
{
    string polecenie;
    cin>>polecenie;
    if(polecenie==SZYFRUJ)
    {
        for(int i=0;i<x.length();i++)
        {
            if(x[i]==90)     // kody ASCII 90 to Z
                {
                    if(x[i] == 'Z')         {x[i] = 'A';}
                }
            else if(x[i]>64)                {x[i]=x[i]+1;}	// od 65 zaczyna sie A
        }
        for(int i=0;i<x.length();i++)   {cout<<x[i];}
        cout<<endl;
    }
    return 0;
}

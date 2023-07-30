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
        string x;
        getline(cin,x);
        int wynik=x[0]-'0';
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='+') wynik+=x[i+1]-'0';
            if(x[i]=='-') wynik-=x[i+1]-'0';
        }
        cout<<wynik<<endl;
    }
    return 0;
}

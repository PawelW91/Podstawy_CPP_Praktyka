#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int L,y;
        string x;
        cin>>L>>x;
        if(x.length()>2)
        {
            x=x.substr(x.length()-2,2);
            y=stoi(x);
        }
        else{y=stoi(x);}
        if(y%L==0)
            {cout<<"TAK"<<endl;}
        else{cout<<"NIE"<<endl;}


    }
    return 0;
}

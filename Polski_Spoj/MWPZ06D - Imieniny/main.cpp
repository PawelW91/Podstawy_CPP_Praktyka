#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int L,C;
        cin>>L>>C;
        L-=1;
        if (L==0){cout<<"TAK"<<endl;}
        else if(C%L==0){cout<<"NIE"<<endl;}
        else {cout<<"TAK"<<endl;}
    }
    return 0;
}

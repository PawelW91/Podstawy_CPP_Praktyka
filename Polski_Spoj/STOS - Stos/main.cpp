#include <iostream>

using namespace std;

int main()
{
    int x[10],i=0;
    char stos;
    while(cin>>stos)
    {
        if (stos=='+')
        {
            if(i<10)
            {
                cin>>x[i];
                i++;
                cout<<":)"<<endl;
            }
            else {cout<<":("<<endl;}

        }
        if (stos=='-')
            {
                if(i>0)
                {
                    cout<<x[i-1]<<endl;
                    i--;
                }
                else {cout<<":("<<endl;}
            }
    }
    return 0;
}

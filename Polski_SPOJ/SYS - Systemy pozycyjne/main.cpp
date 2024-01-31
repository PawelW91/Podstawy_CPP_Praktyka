#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string jedenastkowy (int x)
    {
        string wynik;
        while(x>0)
            {
                int reszta=x%11;
                if(reszta<10)
                    {
                        wynik=to_string(reszta)+wynik;
                    }
                else
                    {
                        char cyfra='A'+(reszta-10);
                        wynik=cyfra+wynik;
                    }
                x/=11;
            }
        return wynik;
    }

string szesnastkowy(int x)
    {
        string wynik;
        while(x>0)
            {
                int reszta=x%16;
                if(reszta<10)
                    {
                        wynik=to_string(reszta)+wynik;
                    }
                else
                    {
                        char cyfra='A'+(reszta-10);
                        wynik=cyfra+wynik;
                    }
                x/=16;
            }
        return wynik;
    }

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int x;
        cin>>x;
        cout<<szesnastkowy(x)<<" "<<jedenastkowy(x)<<endl;
    }
    return 0;
}

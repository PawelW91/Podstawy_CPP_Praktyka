#include <iostream>

using namespace std;

int main()
{
    string x,odp;
    cin>>x;
    char pomoc=x[0];                                        // Sprawdza: Zapisz czy Odczyt;
        if (pomoc=='0' || pomoc=='1')                       // Zapis danych
            {
                odp="DDDD";
                for(int i=0;i<x.length();i++)
                {
                    if((x[i]=='1' && odp[i+3]=='G') || (x[i]=='0' && odp[i+3]=='D'))
                    {
                        odp+="D";
                    }
                    else odp+="G";
                }
                cout<<odp;
            }
        else if (pomoc=='D' || pomoc=='G')                  //Odczyt danych
            {
                for(int i=4;i<x.length();i++)
                {
                    if(x[i]==x[i-1])
                    {
                        cout<<"0";
                    }
                    else cout<<"1";
                }
            }
        else exit(0);
        cout<<endl;

    return 0;
}

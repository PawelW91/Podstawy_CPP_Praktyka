#include <iostream>
using namespace std;

int main()
{
    string x;
    while (getline(cin,x))
    {
        // Sprawdzam ile znakow ma x przed przetwarzaniem.
        if(x.length()<2) cout<<x;
        else if (x.length()>=2)
        {
            // Zamieniam miejscami s¹siednie znaki.
            for(int i=0;i<x.length()-1;i+=2)
            {
                cout<<x[i+1]<<x[i];
            }
            // Jeœli d³ugoœæ ci¹gu jest nieparzysta, wypisz ostatni znak.
            if (x.length()%2!=0)
            {
                cout<<x[x.length()-1];
            }
        }
        cout<<endl;
    }
    return 0;
}

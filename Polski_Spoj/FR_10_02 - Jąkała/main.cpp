#include <iostream>

using namespace std;

int main()
{
    int ile;
    cin>>ile;
    char x[ile];
    string slowo;
    for(int i=0;i<ile;i++)                  // Wczytuje znaki ktore wymawia podwojnie
    {
        cin>>x[i];
    }
    cin>>slowo;
    for(int i=0;i<slowo.length();i++)       // Wypisuje slowo po jednym znaku
    {
        cout<<slowo[i];
        for(int j=0;j<ile;j++)              // Jezeli w slowie pojawia sie znak, ktory ma byc wymowiony dwukrotnie - zostaje on wypisany drugi raz
        {
            if(slowo[i]==x[j])
            {
                cout<<slowo[i];
            }
        }
    }
    cout<<endl;
    return 0;
}

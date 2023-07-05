#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int ile;
        cin>>ile;
        int liczby[ile];
        for (int i=0;i<ile;i++){cin>>liczby[i];}

        for (int j=1;j<ile;j++){cout<<liczby[j]<<" ";}
        cout<<liczby[0]<<endl;
    }
    return 0;
}

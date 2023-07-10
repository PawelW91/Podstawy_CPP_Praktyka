#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout<<"Podaj ile liczb porownujesz, a nastepnie liczby: ";
    cin>>ile;
    int x[ile];
    for (int i=0;i<ile;i++)
    {
        cin>>x[i];
    }
    int m=x[0];
    for (int i=1;i<ile;i++)
    {
        if (m<x[i]){m=x[i];}
    }
    cout<<"Najwieksza to: "<<m<<endl;
    return 0;
}

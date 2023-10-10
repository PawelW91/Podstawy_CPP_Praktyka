#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        //Wczytywanie danych
        string rodzaj;
        int ile;
        cin>>rodzaj>>ile;
        string x1[ile],x2[ile],x3[ile];

        if(rodzaj=="g" || rodzaj=="d")
        {
            for(int i=0;i<ile;i++)
            {
                cin>>x1[i]>>x2[i];
            }
        }
        else if (rodzaj=="gw" || rodzaj=="dw")
        {
            for(int i=0;i<ile;i++)
            {
                cin>>x1[i]>>x2[i]>>x3[i];
            }
        }

        //Wynik
        if (rodzaj=="g")
        {
            cout<<"graph {"<<endl;
            for(int i=0;i<ile;i++)
            {
                cout<<x1[i]<<" -- "<<x2[i]<<";"<<endl;
            }
            cout<<"}";
        }
        else if (rodzaj=="d")
        {
            cout<<"digraph {"<<endl;
            for(int i=0;i<ile;i++)
            {
                cout<<x1[i]<<" -> "<<x2[i]<<";"<<endl;
            }
            cout<<"}";
        }
        else if (rodzaj=="gw")
        {
            cout<<"graph {"<<endl;
            for(int i=0;i<ile;i++)
            {
                cout<<x1[i]<<" -- "<<x2[i]<<" [label = "<<x3[i]<<"];"<<endl;
            }
            cout<<"}";
        }
        else if (rodzaj=="dw")
        {
            cout<<"digraph {"<<endl;
            for(int i=0;i<ile;i++)
            {
                cout<<x1[i]<<" -> "<<x2[i]<<" [label = "<<x3[i]<<"];"<<endl;
            }
            cout<<"}";
        }
        cout<<endl;
    }
    return 0;
}

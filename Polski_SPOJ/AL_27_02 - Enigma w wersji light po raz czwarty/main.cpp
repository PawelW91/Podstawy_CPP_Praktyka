#include <iostream>

using namespace std;

int main()
{
    string x;
    char y;
    while(cin>>x)
    {
        cin.get(y);                                                             //jezeli na koncu slowa jest '/n' przenosi do nowej linii
        cout<<x[0];                                                             //wyswietla pierwsza litere kazdego slowa
        if(x.find(".")!= string::npos && y!='\n')   cout<<" ";                  //jezeli na koncu slowa jest '.' wstawia spacje
        if(y == '\n')                               cout<<endl;
    }
    return 0;
}

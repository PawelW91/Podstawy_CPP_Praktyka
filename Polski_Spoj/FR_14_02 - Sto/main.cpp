#include <iostream>

using namespace std;

int main()
{
    string slowo,szukaj="sto";
    cin>>slowo;
    size_t pozycja=slowo.find(szukaj);
    if(pozycja!=string::npos)   cout<<"TAK"<<endl;
    else                        cout<<"NIE"<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    string tab,szukaj=" ";
    getline(cin,tab);
    size_t pozycja=tab.find(szukaj);
    while(pozycja>0){
        tab.erase(pozycja,1);

    }
    cout<<tab;


    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    string line;
    while(getline(cin,line)){                   //wczytuje linie danych

        int x,l;
        vector<int> liczby;
        istringstream iss(line);
        iss>>x;                                 //wczytuje pierwsza zmienna
        while (iss>>l) {                        //wczytuje ciag pozostalych zmiennych do vectora
            liczby.push_back(l);
        }

        sort(liczby.begin(), liczby.end());     //usówa powtarzajace sie liczby
        auto new_end = unique(liczby.begin(), liczby.end());
        liczby.erase(new_end, liczby.end());

        if (liczby.size()>=x) {                 // Wypisanie x liczby od koñca
            cout<<liczby[liczby.size()-x]<<endl;
        }else{
            cout<<"-"<<endl;
        }
    }
    return 0;
}

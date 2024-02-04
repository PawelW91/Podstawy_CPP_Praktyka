#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int ileWyrazow;
    cin>>ileWyrazow;
    string x;
    vector<char> litery;
    while(ileWyrazow--)
    {
        cin>>x;
        char y;
        for(int i=0;i<x.length();i++)
        {
            y=x[i];
            litery.push_back(y);
        }
        sort(litery.begin(),litery.end());
        int wynik=litery.back()-litery.front();
        litery.clear();
        cout<<wynik<<endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    string x;
    unordered_set<string> uniqueStrings;
    while (getline(cin,x))
    {
        auto y=uniqueStrings.find(x);
        if (y!=uniqueStrings.end())
            {
                uniqueStrings.erase(y);
            }
        else
            {
                uniqueStrings.insert(x);
            }
    }
    for (const auto &str:uniqueStrings)
        {
            cout<<str<<endl;
        }

    return 0;
}

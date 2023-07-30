#include <iostream>
#include <string>

using namespace std;

string string_merge(const string& x1, const string& x2, int L) {
    string merged;
    for (int i=0;i<L;i++)
    {
        merged +=x1[i];
        merged +=x2[i];
    }
    return merged;
}

int main() {
    int ile_t;
    cin >> ile_t;
    while (ile_t--) {
        string x1,x2;
        cin>>x1>>x2;
        int L1=x1.length();
        int L2=x2.length();
        int L=min(L1,L2);
        string S=string_merge(x1,x2,L);
        cout<<S<<endl;
    }
    return 0;
}

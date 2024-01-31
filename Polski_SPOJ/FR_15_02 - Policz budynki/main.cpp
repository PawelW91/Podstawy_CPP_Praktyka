#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int nr [n];
    string nazwisko [n];

    for (int i=0;i<n;i++)
    {cin>>nr[i]>>nazwisko[i];}

    vector<bool> powtorzenia(n,false);
    int ile_budynkow=0;

    for (int i=0;i<n;i++)
        if(!powtorzenia[i]) {
                ile_budynkow++;
                for (int j=i+1;j<n;j++){
                    if (nr[j]==nr[i]){powtorzenia[j]=true;
                    }
                }
        }

    cout<<ile_budynkow<<endl;

    return 0 ;
}

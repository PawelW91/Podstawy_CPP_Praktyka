#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int waga_mleka[n],waga_nutelli[n];
    // Wczytywanie wag mleka
    for (int i = 0; i < n; i++)
        {
            cin>>waga_mleka[i];
        }
    // Wczytywanie wag Nutelli
    for (int i = 0; i < n; i++)
        {
            cin>>waga_nutelli[i];
        }
    // Sortowanie tablic wag mleka i Nutelli
    sort(waga_mleka, waga_mleka + n);
    sort(waga_nutelli, waga_nutelli + n);

    // Sprawdzanie dla kaødego zapytania
    for (int i=0;i<m;i++)
        {
            int x;
            cin>>x;
    // Dwie wskaünikowe iteracje po posortowanych tablicach
            int left=0,right=n-1;
            bool TAK=false;
            while (left<n&&right>=0)
                {
                    int current_sum=waga_mleka[left]+waga_nutelli[right];
                    if (current_sum==x)
                        {
                            TAK=true;
                            break;
                        }
                    else if (current_sum<x)           {left++;}
                    else                              {right--;}
                }
            if (TAK)      {cout<<"TAK"<<endl;}
            else          {cout<<"NIE"<<endl;}
        }

    return 0;
}

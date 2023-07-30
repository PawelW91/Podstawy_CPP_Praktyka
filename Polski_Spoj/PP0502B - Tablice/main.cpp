#include <iostream>
using namespace std;
int main()
{
    int ilosc_prob;
    cin>>ilosc_prob;
    for(int i=0; i<ilosc_prob; i++){
        int ilosc_liczb;

        cin>>ilosc_liczb;

        int *tablica;
        tablica=new int[ilosc_liczb];

            for (int j=0; ilosc_liczb>j; j++)
            {
                cin>>tablica[j];
            }
                for (int k=ilosc_liczb-1; 0<=k; k--)
            {
                cout<<tablica[k]<<endl;;
            }
    }
    return 0;
}

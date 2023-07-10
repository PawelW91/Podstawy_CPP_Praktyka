#include <iostream>

using namespace std;

int znajdz_n(int x)
    {
        int n=0;
        while(x!=1){
            if(x%2==0){
                x=x/2;
            }
            else{
                x=3*x+1;
            }
            n+=1;
        }
        return n;
    }

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
     int x;
     cin>>x;
     cout<<znajdz_n(x)<<endl;
    }
    return 0;
}

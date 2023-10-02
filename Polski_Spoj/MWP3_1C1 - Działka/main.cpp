#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){        //sprawdza czy liczba jest pierwsza
    if(n<=1){return false;}

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){return false;}
    }
    return true;
}
int gcd(int a,int b){       //sprawdza NWD
    if (b==0) {return a;}
    return gcd(b,a%b);
}

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b && a%2==0){cout<<a/2<<endl;}        //trzeba podzielic dzialke, ale jezeli jest liczba nie parzysta to nie mozna podzielic na polowe
        else if(isPrime(a)||isPrime(b)){cout<<1<<endl;} //jezeli bok dzialki to liczba pierwsza, a konieczne jest podzielenie dzialki - to wynik zawsze bedzie 1
        else
        {
            int g=gcd(a,b);
            if(a==b)                                //jezeli boki sa rowne i nieparzystej dlugosci, a wiemy ze trzeba podzielic dzialke - to odpowiedzia bedzie drugi w kolejnosci NWD.
            {
                for (int i=g/2;i>=1;i--)
                {
                    if (g%i==0)
                    {
                        cout<<i<<endl;
                        break;
                    }
                }
            }
            else{cout<<g<<endl;}
        }
    }
    return 0;
}

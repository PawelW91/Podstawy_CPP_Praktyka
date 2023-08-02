#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int n=0; //ilosc uczestnikow
        double k=0; //zuzycie kredy w kg/m2
        cin>>n>>k;
        double long calosc = 0;
        for (int i=0;i<n;i++)                        //obliczam pole kazdego kolejnego trojkata i sumuje kolejne pola w zmiennej calosc
        {
            double a,b,c,s;
            double long pole=0;
            cin>>a>>b>>c;
            a/=100;b/=100;c/=100;
            if(a+b>c && a+c>b && b+c>a)
            {
                s=(a+b+c)/2;
                pole=sqrt(s*(s-a)*(s-b)*(s-c));
            }
            else {pole=0;}
            calosc+=pole;
        }
        long double wynik=(calosc*k)*1000;            //cale pole * zuzycie kredy
        cout<<fixed<<setprecision(0)<<wynik<<endl;
    }
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

int ile5(long long x){      //Sprawdza ile '5' jest w liczbie.
    int ile=0;
    while (x>0)
        {
            if (x%10==5) {ile++;}
            x/=10;
        }
    return ile;
}

int main() {
    long long n,p,p2,x=1;
    int k;
    cin>>n>>k;
    n+=1;
    string z=to_string(n);
    int numDigits=z.length();
    if(numDigits<k)         //jezeli podana liczba ma mniej cyfr niz 'k', zwieksza liczbe cyfr do k.
    {
        n=n+pow(10,k-1);
    }
    if(ile5(n)>=k){cout<<n<<endl;}
    else
    {
        while(n%10!=5){n++;if(ile5(n)>=k){cout<<n<<endl;break;}}
        while(!(ile5(n)>=k))        //zamienia kolejne cyfry na 5 - od najmniejszej.
        {
            p=n-(n/x)*x;
            n/=x;
            p2=n;
            while(ile5(p2)>=ile5(n)){n++;}
            n=(n*x)+p;
            if(ile5(n)>=k){cout<<n<<endl;break;}
            x*=10;
        }

    }
    return 0;
}

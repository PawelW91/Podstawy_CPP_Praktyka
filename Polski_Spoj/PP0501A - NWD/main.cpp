#include <iostream>
#include <cmath>
using namespace std;


int NWD (int a,int b){
	while (b!=0){
		int x =b;
		b=a%b;
		a=x;
	}
	return a;
}


int main()
{
    int ile_t;
    cin>>ile_t;
    for(int i=0;i<ile_t;i++)
    {
        int a,b;
        cin>>a>>b;

        //NWD - najwiekszy wspolny dzielnik

        int nwd=NWD(a,b);

        cout<<nwd<<endl;

    }

    return 0 ;
}

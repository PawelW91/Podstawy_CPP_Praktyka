#include <iostream>

using namespace std;


int a,b,c,m;




int main()
{
    cout << "Hey, podaj trzy liczby:" << endl;
    cout << "A: "; cin>>a;
    cout << "B: "; cin>>b;
    cout << "C: "; cin>>c;
    m=a;
    if (a<b)m=b;
    if (b<c)m=c;

    cout<< "Najwieksza z nich to: "<<m<<" ;-)";


    return 0;
}

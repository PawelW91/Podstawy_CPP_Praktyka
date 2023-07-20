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


    /*
    NA WSKAZNIKACH NAJWIEKSZA LICZBA Z N LICZB:
    int N,m;
    cout<<"Ile liczb: ";
    cin>>N;
    int *T;
    T=new int [N];
    cout<<"wymien liczby: "; for(int i=0;i<N;i++){cin>>T[i];}

        for(int i=0;i<N;i++)
        {
            if (m<*T)m=*T;
            T++;
        }
        cout<<"Najwieksza to: "<<m;


    delete [] T;
    */


    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int ile_t,ile_l,suma;
float sr;

int main()
{
    cin>>ile_t;
    cout<<endl;
for (int i=0;i<ile_t;i++)
{
    cin>>ile_l;
    int liczby[ile_l];
    float zblizona[ile_l];
    suma=0;
    for (int i=0;i<ile_l;i++)
    {
        cin>>liczby[i];
        suma+=liczby[i];
    }
    sr=suma/ile_l;







    cout<<endl<<sr<<endl<<endl;

}

    return 0;
}

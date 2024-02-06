#include <iostream>

using namespace std;

int main()
{
    double k,m=1.609344;
    cin>>k;
    k/m<300?cout<<"NIE"<<endl:(((k/m)>300)&&((k/m)<500))?cout<<"SPRAWDZIMY TWOJE OBECNE BUTY"<<endl:cout<<"TAK"<<endl;
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n; //kwota netto
    float b; //kwota brutto b=v+n;
    float v; //kwota podatku v=b-n;
    cin>>n>>b;
    v=(b-n)/2;

    cout<<fixed<<setprecision(2)<<v<<" "<<n+v;

    return 0;
}

#include <iostream>
using namespace std;

int X(int a, int b) {
    int podstawa =a%10;
    int wykladnik =b%4+4;
    int wynik =1;

    for (int i=0;i<wykladnik;i++) {
        wynik=(wynik*podstawa)%10;
    }
    return wynik;
}

int main() {
    int ile_t;
    cin >> ile_t;

    for (int i=0;i<ile_t;i++) {
        int a,b;
        cin>>a>>b;
        int x=X(a,b);
        cout<<x<<endl;
    }

    return 0;
}

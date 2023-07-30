#include <iostream>
using namespace std;

int Fwynik(int x, int y) {
    while (y != 0) {
        int p=y;
        y=x%y;
        x=p;
    }
    return 2*x;
}

int main() {
    int ile_t;
    cin >>ile_t;

    int x[ile_t][2];
    for (int i=0;i<ile_t;i++)
        {
        cin>>x[i][0]>>x[i][1];
        }

    for (int i=0;i<ile_t;i++)
        {
            int wynik=Fwynik(x[i][0], x[i][1]);
            cout<<wynik<<endl;
        }

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int ile;
    cin>>ile;
    string imie[ile];
    int nie=0,ok=0,nad=0;
    double waga[ile],wzrost[ile],BMI[ile];
    for(int i=0;i<ile;i++)
        {
            cin>>imie[i]>>waga[i]>>wzrost[i];
            wzrost[i]/=100;
            BMI[i]=waga[i]/(wzrost[i]*wzrost[i]);

        }

            cout<<"niedowaga"<<endl;
            for(int i=0;i<ile;i++)
            {
                if(BMI[i]<18.5){cout<<imie[i]<<endl;}
            }
            cout<<endl;
            cout<<"wartosc prawidlowa"<<endl;
            for(int i=0;i<ile;i++)
            {
                if(BMI[i]>=18.5&&BMI[i]<25){cout<<imie[i]<<endl;}
            }
            cout<<endl;
            cout<<"nadwaga"<<endl;
            for(int i=0;i<ile;i++)
            {
                if(BMI[i]>=25){cout<<imie[i]<<endl;}
            }
            cout<<endl;


    return 0;
}

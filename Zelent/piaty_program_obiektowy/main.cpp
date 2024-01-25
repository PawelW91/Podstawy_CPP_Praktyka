#include <iostream>
#include <math.h>

using namespace std;

//LEKCJA DZIEDZICZENIA

class Punkt
{
    float x,y;
    string nazwa;

    public:
    void show()
    {
        cout<<nazwa<<" X:"<<x<<" Y:"<<y<<endl;
    }
    Punkt(string n="A",float xx=0,float yy=0)
    {
        x=xx;
        y=yy;
        nazwa=n;
    }
};
class Kolo:public Punkt     //klasa Kolo dziedziczy publicznie z klasy Punkt
{
    string nazwa;

    protected:
    float r;

    public:
    Kolo(string nk="Kolko",string np="S",float xx=0,float yy=0, float pr=1)
    :Punkt(np,xx,yy)
    {
        nazwa=nk;
        r=pr;
    }
    void show()
    {
        cout<<"Kolo: "<<nazwa<<endl;
        cout<<"Srodek znajduje sie w: "<<endl;
        Punkt::show();
        cout<<"Promien kola wynosi: "<<r<<endl;
        cout<<"Pole kola wynosi: "<<(M_PI*r*r)<<endl;
    }

};
class Kula:public Kolo
{
    string nazwa;

    public:
    Kula (string nkuli="Kula",string nk="Kolko",string np="S",float xx=0,float yy=0, float pr=2)
    :Kolo(nk,np,xx,yy,pr)
    {
        nazwa=nkuli;
    }
    void show()
    {
        cout<<"Kula: "<<nazwa<<endl;
        Kolo::show();
        cout<<"Objetosc kuli wynosi: "<<((4/3)*(M_PI*r*r*r))<<endl;
    }
};
int main()
{
    Kula k1;
    k1.show();

    return 0;
}

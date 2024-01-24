#include <iostream>
#include "przyjaciele.h"

using namespace std;

Punkt::Punkt(string n, float xx,float yy)
{
    nazwa=n;
    x=xx;
    y=yy;
}

void Punkt::wczytaj()
{
    cout<<endl<<"Podaj x: ";            cin>>x;
    cout<<endl<<"Podaj y: ";            cin>>y;
    cout<<endl<<"Nazwa punktu: ";       cin>>nazwa;
}

Prostokat::Prostokat(string n,float xx,float yy, float s, float w)
{
        nazwa=n;
        x=xx;
        y=yy;
        szerokosc=s;
        wysokosc=w;
}

void Prostokat::wczytaj()
{
    cout<<endl<<"Podaj x lewego dolnego naroznika: ";                   cin>>x;
    cout<<endl<<"Podaj y lewego dolnego naroznika: ";                   cin>>y;
    cout<<endl<<"Podaj szerokosc: ";                                    cin>>szerokosc;
    cout<<endl<<"Podaj wysokosc: ";                                     cin>>wysokosc;
    cout<<endl<<"Nazwa prostokata: ";                                   cin>>nazwa;
}

void Prostokat::sedzia(Punkt pkt,Prostokat p)
{
    if((pkt.x>=p.x)&&(pkt.x<=p.x+p.szerokosc)&&(pkt.y>=p.y)&&(pkt.y<=p.y+p.wysokosc))
    {
        cout<<endl<<"Punkt "<<pkt.nazwa<<" nalezy do prostokata: "<<p.nazwa<<endl;
    }
    else
    {
        cout<<endl<<"Punkt "<<pkt.nazwa<<" lezy POZA prostokatem: "<<p.nazwa<<endl;
    }
}

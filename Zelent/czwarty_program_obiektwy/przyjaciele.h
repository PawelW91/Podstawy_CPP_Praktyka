#include <iostream>

using namespace std;
class Prostokat;

class Punkt
{
    string nazwa;
    float x,y;

    public:
    Punkt(string="A",float=0,float=0);
    void wczytaj();

    friend class Prostokat;
};

class Prostokat
{
    string nazwa;
    float x,y,szerokosc,wysokosc;

    public:
    Prostokat(string="Brak",float=0,float=0,float=1,float=1);
    void wczytaj();
    void sedzia(Punkt pkt,Prostokat p);

};

#include <iostream>
#include <math.h>

using namespace std;

class Ksztalt
{
public:
    virtual void oblicz_pole()=0;                       //Czysta funkcja wirtualna
};

//////////////////////////////////////////////////////////////////////////////////

class Kolo:public Ksztalt
{
    float r;
public:
    Kolo(float x)
    {
        r=x;
    }
    virtual void oblicz_pole()
    {
        cout<<"Pole kola to: "<<M_PI*r*r<<endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////

class Kwadrat:public Ksztalt
{
    float a;
public:
    Kwadrat(float x)
    {
        a=x;
    }
    virtual void oblicz_pole()
    {
        cout<<"Pole kwadratu to: "<<a*a<<endl;
    }
};

//Funkcja uniwersalna
void obliczenia(Ksztalt *x)
{
    x->oblicz_pole();
}

int main()
{
    Kolo k(1);
    Kwadrat kw(2);

    Ksztalt *wsk;

    wsk=&k;
    wsk->oblicz_pole();

    wsk=&kw;
    wsk->oblicz_pole();

    ////////////////////

    obliczenia (wsk);

    return 0;
}

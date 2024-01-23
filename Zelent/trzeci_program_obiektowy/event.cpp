#include <iostream>
#include "event.h"

using namespace std;

void Event::load()
{
    cout<<endl<<"Nazwa wydarzenia: ";
    cin>>name;
    cout<<endl<<"Dzien: ";
    cin>>day;
    cout<<endl<<"Miesiac: ";
    cin>>month;
    cout<<endl<<"Rok: ";
    cin>>year;
    cout<<endl<<"Godzina: ";
    cin>>hour;
    cout<<endl<<"Minut: ";
    cin>>minutes;
}

void Event::show()
{
    cout<<endl<<name<<" ";
    if (day<10)             {cout<<"0"<<day;}
    else                    {cout<<day;}
    cout<<".";
    if (month<10)           {cout<<"0"<<month;}
    else                    {cout<<month;}
    cout<<"."<<year<<" ";
    if (hour<10)            {cout<<"0"<<hour;}
    else                    {cout<<hour;}
    cout<<":";
    if (minutes<10)         {cout<<"0"<<minutes;}
    else                    {cout<<minutes;}
    cout<<endl;
}

Event::Event(string n,int d,int m,int y,int h,int mins)
{
    name=n;
    day=d;
    month=m;
    year=y;
    hour=h;
    minutes=mins;
}

Event::~Event()
{
    cout<<endl<<"To ja, destruktor!"<<endl<<"Sprzatam po obiekcie ;-)"<<endl;
}

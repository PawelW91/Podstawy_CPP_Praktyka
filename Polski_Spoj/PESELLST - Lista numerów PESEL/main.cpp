#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <sstream>
//DO SKONCZENIA
using namespace std;

void pierwsza_funkcja(char x,int ile,string P[]);       //funkcja nadpisuje Pesel kobiet/mezczyzn na poczatek tablicy - dzieki temu dalej pracujemy na krotszej tabliy P[p];
void druga_funkcja(string P[],int p);

int main()
{
    int ile;
    string kod;
    cin>>kod>>ile;
    string P[ile];
    for(int i=0;i<ile;i++)      {cin>>P[i];}

    pierwsza_funkcja(kod[0],ile,P);


    return 0;
}
void pierwsza_funkcja(char x,int ile,string P[])
{
    int p=0,p1;
    if(x=='2')          //kobieta
    {
        for(int i=0;i<ile;i++)
        {
            char lastDigit = P[i].back();
            p1 = stoi(string(1, lastDigit));
            if(p1%2==0)
            {
                P[p]=P[i];
                p++;
            }
        }
    }
    else if (x=='1')    //mezczyzna
    {
        for(int i=0;i<ile;i++)
        {
            char lastDigit = P[i].back();
            p1 = stoi(string(1, lastDigit));
            if(p1%2!=0)
            {
                P[p]=P[i];
                p++;
            }
        }
    }
    else
    {
        p=ile;
    }
    druga_funkcja(P,p);
}

void druga_funkcja(string P[],int p)
{
            // Pobierz rok, miesi¹c i dzieñ z PESEL
    for(int i=0;i<=p;i++)
    {
        int year = stoi(P[i].substr(0, 2));
        int month = stoi(P[i].substr(2, 2));
        int day = stoi(P[i].substr(4, 2));
            // Dodaj odpowiedni¹ liczbê lat w zale¿noœci od wieku (czy PESEL nale¿y do osoby z XIX, XX czy XXI wieku)
        if (month > 12 && month < 21)
        {
            year += 1800;
            month -= 20;
        }
        else if (month > 20 && month < 33)
        {
            year += 2000;
            month -= 20;
        }
        else if (month > 32 && month < 45)
        {
            year += 2100;
            month -= 40;
        }
        else if (month > 44 && month < 57)
        {
            year += 2200;
            month -= 40;
        }
        else if (month > 56 && month < 69)
        {
            year += 1800;
            month -= 60;
        }

        tm timeinfo = {};
        timeinfo.tm_year = year;
        timeinfo.tm_mon = month - 1; // Months are in the range 0-11
        timeinfo.tm_mday = day;

        chrono::system_clock::time_point tp = chrono::system_clock::from_time_t(mktime(&timeinfo));
        // Pobierz numer dnia tygodnia (1 dla poniedzia³ku, 2 dla wtorku, ..., 7 dla niedzieli)
        time_t tt = chrono::system_clock::to_time_t(tp);
        tm *now = localtime(&tt);
        int dayOfWeek = now->tm_wday;
        // Popraw numeracjê, aby zaczyna³a siê od 1 dla poniedzia³ku
        dayOfWeek = (dayOfWeek == 0) ? 7 : dayOfWeek;

        cout << to_string(dayOfWeek) << endl;
    }
}

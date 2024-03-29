#include <iostream>
#include <string>
#include <math.h>

using namespace std;

char plec(int pesel)
{

    if (pesel % 2 == 0)
        return '2';
    else
        return '1';

}

char przestepny(int rok, int miesiac)
{
    int wiek=0;

    if (miesiac > 0 && miesiac < 13)
    {
        wiek = 19;
        rok+=(wiek*100);

    }
    else if (miesiac > 20 && miesiac < 33)
    {
        wiek = 20;
        rok+=(wiek*100);

    }
    else if (miesiac > 40 && miesiac < 53)
    {
        wiek = 21;
        rok+=(wiek*100);

    }

    else if (miesiac > 60 && miesiac < 73)
    {
        wiek = 22;
        rok+=(wiek*100);

    }

    else if (miesiac > 80 && miesiac < 93)
    {
        wiek = 18;
        rok+=(wiek*100);

    }

    if(rok % 4 == 0){
        if(rok % 100 == 0){
            if(rok % 400 == 0) return '1';
            else return '2';

        }
        else return '1';
    }
    else return '2';

}


int dzien_tygodnia(int day,int month,int year)
 {
month -= 2;
  if (month < 1) {
    month += 12;
    year -= 1;
  }
  if(year<12){year+=2000;}
  else{year+=1900;}
  int century = Math.floor(year / 100);
  year %= 100;
  int weekDay[(Math.floor((26 * month - 2) / 10) +day +year +Math.floor(year / 4) +Math.floor(century / 4) +5 * century) %7];

}

int main()
{

    string kod;
    int testy;

    cin >> kod >> testy;

    int ile = 0;
    int wynik = 0;

    string test_pesel = {'1', '3', '7', '9', '1', '3', '7', '9', '1', '3', '1'};

    for (int i = 0; i < 3; i++)
    {
        if (kod[i] != '0')
            ile++;
    }

    for (int k = 0; k < testy; k++)
    {

        string pesel;
        cin >> pesel;

        int ilosc = 0;
        bool szukaj=0;
        int nr = 0;

        for (int i = 0; i < 11; i++)
        {

            if (pesel[i] == '?')
            {
                szukaj = true;
                nr = i;
            }
        }

        int szukana = 1;
        int suma = 0;

        if (szukaj == true)
        {
            for (int i = 0; i < 11; i++)
            {
                if (i != nr)
                {
                    suma += ((pesel[i] - 48) * (test_pesel[i] - 48));
                }

            }

            int suma_dwa = suma;

            while (suma_dwa % 10 != 0)
            {
                suma_dwa = suma;
                suma_dwa += (test_pesel[nr] - 48) * szukana;
                szukana++;
            }

            szukana -= 1;
            string zmiana=to_string(szukana);

            pesel.replace(nr, 1, zmiana);

        }

        int suma_test=0;
        for(int i=0; i<11; i++){
            suma_test+=((pesel[i] - 48) * (test_pesel[i] - 48));
        }

        if(suma_test % 10 == 0){

            if (kod[0] != '0')
            {
                char wartosc_1 = plec(pesel[9] - 48);
                if (wartosc_1 == kod[0])
                {
                    ilosc++;
                }

            }

            if (kod[2] != '0')
            {
                char wartosc_2 = przestepny(stoi(pesel.substr(0, 2)), stoi(pesel.substr(2, 2)));
                if (wartosc_2 == kod[2])
                {
                    ilosc++;
                }
            }

            if (kod[1] != '0')
            {
                char wartosc_3 = dzien_tygodnia(stoi(pesel.substr(0, 2)), stoi(pesel.substr(2, 2)), stoi(pesel.substr(4, 2)));
                if (wartosc_3 == kod[1])
                {
                    ilosc++;
                }
            }

            if (ilosc == ile)
            {
                wynik++;
            }

        }

    }

    cout << wynik;

    return 0;
}

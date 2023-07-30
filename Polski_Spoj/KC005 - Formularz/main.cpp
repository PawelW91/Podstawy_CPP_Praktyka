#include <iostream>
#include <cctype>
#include <string>
#include <regex>
using namespace std;

bool poprawne(string x)                     //sprawdza czy pierwsza litera jest wielka, a jednoczesnie pozostale sa male
{
    if(isupper(x[0]))
    {
        for(int i=1;i<x.length();i++)
        {
            if(!islower(x[i]))
            {
                return false;
            }
        }
        return true;
    }
    return false;
}
bool poprawny_format_daty(const string& input)      //sprawdza czy data jest wprowadzona w prawidlowym formacie RRRR-MM-DD
{
    regex date_pattern(R"(\d{4}-\d{2}-\d{2})");
    return regex_match(input, date_pattern);
}
bool poprawna_data(string data)                     //sprawdza czy data znajduje sie w podanych zakresach
{
    if(poprawny_format_daty(data))
    {
        int rok,mies,dzien;
        sscanf(data.c_str(), "%d-%d-%d", &rok, &mies, &dzien);
        if(rok>=1900 && rok<=2000 && mies>=1 && mies<=12 && dzien>=1 && dzien<=31)
        {
            return true;
        }
        else return false;
    }
    else return false;
}

int main()
{
    string x,imie,nazwisko,data;                    //do zmiennej x wczytuje niepotrzebne dane
    while(cin>>x>>imie>>x>>nazwisko>>x>>x>>data)
    {
        imie.erase(imie.length()-1,1);              //usuwam srednik z konca
        nazwisko.erase(nazwisko.length()-1,1);      //usuwam srednik z konca

        if(!poprawne(imie))                                                               {cout<<0<<endl;}
        else if(poprawne(imie)&&!poprawne(nazwisko))                                      {cout<<1<<endl;}
        else if(poprawne(imie)&&poprawne(nazwisko)&&!poprawna_data(data))                 {cout<<2<<endl;}
        else                                                                              {cout<<3<<endl;}
    }
    return 0;
}

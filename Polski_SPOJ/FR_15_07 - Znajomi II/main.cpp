#include <iostream>
#include <string>

using namespace std;

bool anagram(const string& slowo, const string& sprawdzam)              //funkcja sprawdza czy kolejne slowo sklada sie z takich samych znakow (ilosc znakow jest brana pod uwage) jak testowane
{
    int licz[26]={0};
    for(char c:slowo)   {licz[c-'A']++;}
    for(char c:sprawdzam)
    {
        licz[c-'A']--;
        if(licz[c-'A']<0)   {return false;}
    }
    for(int i=0;i<26;i++)
    {
        if(licz[i]!=0)      {return false;}
    }
    return true;
}

int main()
{
    int ile,odp=0,pomoc=0;
    cin>>ile;
    string x[ile],odp2;
    for(int i=0;i<ile;i++)                                              //wczytuje dane
    {
        cin>>x[i];
    }
    for(int i=0;i<ile;i++)
    {
        pomoc=0;
        for(int j=0;j<ile;j++)
        {
            if(anagram(x[i],x[j])==1)                                   //sprawdzam ktore slowo powtarza sie najwieksza liczbe razy
            {
                pomoc+=1;
                if(pomoc>=odp)
                {
                    odp=pomoc;
                    odp2=x[i];                                          //zaznaczam slowo(odp2) ktorego anagramy pojawily sie najwieksza ilosc razy
                }
            }
        }
    }
    for(int i=0;i<ile;i++)                                              //w poprzedniej lini znalazlem slowo (odp2), teraz wyswietla jego wszystkie anagramy
    {
        if(anagram(odp2,x[i])==1) {cout<<x[i]<<endl;}
    }


    return 0;
}

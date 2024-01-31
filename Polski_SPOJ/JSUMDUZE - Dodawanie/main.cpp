#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//ZADANIE ROZWIAZANE NA STRINGACH;

string suma (string z1, string z2);  //funkcja dodaj¹ca odwrócone liczby

int main()
{
    int ile;
    cin>>ile;
    while(ile--)
    {
        string a,b,z1,z2,wynik;
        cin>>a>>b;
        int x;
        x=max(a.length(),b.length());
        string c[x];

        for(int i=0;i<a.length();i++)       //Zapis liczby od ty³u
        {
            c[i]=a[a.length()-1-i];
            z1+=c[i];
        }
        for(int i=0;i<b.length();i++)       //Zapis liczby od tylu
        {
            c[i]=b[b.length()-1-i];
            z2+=c[i];
        }

        a=suma(z1,z2);
        string d[a.length()];

        for(int i=0;i<a.length();i++)       //Zapis prawid³owej liczby
        {
            d[i]=a[a.length()-1-i];
            wynik+=d[i];
        }
        cout<<wynik<<endl;
    }
    return 0;
}

string suma (string z1, string z2)
{
    int p1,p2,p3=0;
    string suma,p;
    p=z1;
    if(z2.length()>z1.length()) {p=z2; z2=z1; z1=p;}
    for(int i=0;i<z2.length();i++)
    {
            p1=z1[i]-'0';
            p1+=p3;
            p2=z2[i]-'0';
            p1+=p2;
            if (p1>9)
                {
                    p1=p1%10;
                    p3=1;
                }
            else
                {
                    p3=0;
                }
            suma+=to_string(p1);
    }

    for(int i=z2.length();i<z1.length();i++)
    {
            p1=z1[i]-'0';
            p1+=p3;
            if (p1>9)
                {
                    p1=p1%10;
                    p3=1;
                }
            else
                {
                    p3=0;
                }
            suma+=to_string(p1);
    }
    if(p3!=0) {suma+=to_string(p3);}
    return suma;
}

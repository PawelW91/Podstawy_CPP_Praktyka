#include <iostream>
#include <string>

using namespace std;

unsigned long long potega(unsigned long long a,unsigned long long b){
if (b==0)return 1;
else
return a=a*potega(a,--b);
}

string zmianaBin(unsigned long long liczba){
    string binarny="";
    while(liczba!=0){
        if(liczba%2==0){
            binarny="0"+binarny;
        }
        else{
            binarny="1"+binarny;
        }
        liczba=liczba/2;
    }
    return binarny;
}

string odwracanie(string odwroc){
    char pomocniczy;
    int dlugosc=odwroc.length();
    for(int i=0; i<dlugosc/2; i++){
        pomocniczy=odwroc[i];
        odwroc[i]=odwroc[dlugosc-1-i];
        odwroc[dlugosc-1-i]=pomocniczy;
    }
    return odwroc;
}

unsigned long long zmianaDec(string odwrocony)
{
    unsigned long long liczbaDec=0;
    int dlugosc=odwrocony.length();
    unsigned long long pomocniczy;
    for(int i=0; i<dlugosc; i++){
        pomocniczy=odwrocony[dlugosc-1-i]-'0';
        liczbaDec+=pomocniczy*potega(2,i);
    }
    return liczbaDec;
}
int main()
{
    unsigned long long liczba;
    while(cin>>liczba)
    {
        string binarny=zmianaBin(liczba);
        string odwrocony=odwracanie(binarny);
        cout<<zmianaDec(odwrocony)<<endl;
    }
    return 0;
}

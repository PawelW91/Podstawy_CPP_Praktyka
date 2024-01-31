#include <iostream>
#include <string>

using namespace std;
int main() {

    int x;                                              //max dlugosc zmiennej
    cin>>x;
    string nazwa;                                       //nazwa zmiennej
    cin>>nazwa;
    while(nazwa.length()>x)
    {
        if(nazwa.length()>x)                            //usuwa znaki które nie sa liter¹ lub cyfra ($ - traktowany jako litera)
        {
            for(int i=nazwa.length()-1;i>=0;i--)
            {
                if(!isalnum(nazwa[i]) && nazwa[i]!='$')
                {
                    nazwa.erase(i,1);
                    if(nazwa.length()==x){break;}
                }
            }
        }

        if(nazwa.length()>x)                            //usuwa cyfry od koñca
        {
            for(int i=nazwa.length()-1;i>=0;i--)
            {
                if(isdigit(nazwa[i]))
                {
                    nazwa.erase(i,1);
                    if(nazwa.length()==x){break;}
                }
            }
        }
        int pierwsza_smgl;                              //wyznacza pozycje pierwszej samogloski - aby j¹ pomin¹æ przy usuwaniu
            for(int i=0;i<nazwa.length();i++)
            {
                if((nazwa[i]=='A' || nazwa[i]=='E' || nazwa[i]=='I' || nazwa[i]=='O' || nazwa[i]=='U' || nazwa[i]=='Y' || nazwa[i]=='a' || nazwa[i]=='e' || nazwa[i]=='i' || nazwa[i]=='o' || nazwa[i]=='u' || nazwa[i]=='y'))
                {
                    pierwsza_smgl=i;
                    break;
                }
            }
        if(nazwa.length()>x)                            //usuwa samogloski od poczatu - z wyj¹tkiem pierwszej
        {
            for(int i=pierwsza_smgl+1;i<nazwa.length();i++)
            {
                if(nazwa[i]=='A' || nazwa[i]=='E' || nazwa[i]=='I' || nazwa[i]=='O' || nazwa[i]=='U' || nazwa[i]=='Y' || nazwa[i]=='a' || nazwa[i]=='e' || nazwa[i]=='i' || nazwa[i]=='o' || nazwa[i]=='u' || nazwa[i]=='y')
                {
                    nazwa.erase(i,1);
                    i--;
                    if(nazwa.length()==x){break;}
                }
            }
        }
        if(nazwa.length()>x)                            //usuwa wszystkie znaki od konca - z wyjatkiem ostatniego
            for(int i=nazwa.length()-2;i>=0;i--)
            {
                if(nazwa.length()>x)
                {
                    nazwa.erase(i,1);
                    if(nazwa.length()==x){break;}
                }
            }
    }
    cout<<nazwa<<endl;
    return 0;
}

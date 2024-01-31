#include <iostream>

using namespace std;

int main()
{
    int ile_t,ile,x;
    string dzien[7],start;

    dzien[0]="Pn";              //deklaracja dni tygodnia do stringa;
    dzien[1]="Wt";
    dzien[2]="Sr";
    dzien[3]="Cz";
    dzien[4]="Pt";
    dzien[5]="So";
    dzien[6]="Nd";
    cin>>ile_t;
    while(ile_t--)
    {
        cin>>start>>ile;
        switch(start[0])        //sprawdzenie od jakiego dnia tygodnia zaczynamy;
        {
            case 'P': if(start[1]=='n'){x=0;}else if(start[1]=='t'){x=4;}break;
            case 'W': x=1;break;
            case 'S': if(start[1]=='r'){x=2;}else if(start[1]=='o'){x=5;}break;
            case 'C': x=3;break;
            case 'N': x=6;break;
        }
        ile%=7;                 //ile%7, poniewaz tydzien ma 7 dni;
        for(int i=0;i<ile;i++)  //wyznaczenie szukanego dnia;
        {
            x+=1;
            if(x>6){x=0;}
        }
        cout<<dzien[x]<<endl;
    }
    return 0;
}

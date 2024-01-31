#include <iostream>
#include <string>
using namespace std;

int pkt (string x);

int main() {
    string x1,x2;
    cin>>x1>>x2;

    if(pkt(x1)>pkt(x2))             {cout<<"JASIO"<<endl;}
    else if(pkt(x1)<pkt(x2))        {cout<<"STASIO"<<endl;}
    else                            {cout<<"REMIS"<<endl;}

    return 0;
}

int pkt (string x)
    {
        int p=0;
        int values[128]={};
        values['T']=10;
        values['J']=11;
        values['Q']=12;
        values['K']=13;
        values['A']=14;

        for (char c:x)
            {
                if (c>='2'&&c<='9')
                    {
                        p+=c-'0';
                    }
                else
                    {
                        p+=values[c];
                    }
            }
            return p;
    }










/*
DRUGIE ROZWI¥ZANIE:

#include <iostream>
using namespace std;
string wygra(string x1,string x2);

int main()
{
    string J1,S2;
    cin>>J1>>S2;


    if(wygra(J1,S2)=="J1")          {cout<<"JASIO"<<endl;}
    else if(wygra(J1,S2)=="S2")     {cout<<"STASIO"<<endl;}
    else                            {cout<<"REMIS"<<endl;}

    return 0;
}

string wygra(string x1,string x2)
{
    int pkt1=0,pkt2=0,p=0;
    for (char c:x1)
        {
            if (c>='2'&&c<='9')
                {
                    pkt1+=c-'0';
                }
            else
                {
                    switch (c)
                        {
                            case 'T':   p=10;     break;
                            case 'J':   p=11;     break;
                            case 'Q':   p=12;     break;
                            case 'K':   p=13;     break;
                            case 'A':   p=14;     break;
                        }
                    pkt1+=p;
                }
        }
    for (char c:x2)
        {
            if (c>='2'&&c<='9')
                {
                    pkt2+=c-'0';
                }
            else
                {
                    switch (c)
                        {
                            case 'T':   p=10;     break;
                            case 'J':   p=11;     break;
                            case 'Q':   p=12;     break;
                            case 'K':   p=13;     break;
                            case 'A':   p=14;     break;
                        }
                    pkt2+=p;
                }
        }

    if(pkt1>pkt2)           return "J1";
    else if(pkt1<pkt2)      return "S2";
    else                    return "R";
}
*/

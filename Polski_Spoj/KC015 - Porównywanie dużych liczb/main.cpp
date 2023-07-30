#include <iostream>

using namespace std;

int main()
{
    string x[3];
    while (cin>>x[0]>>x[1]>>x[2])
    {
        int rownosc=0; // 1 pierwsza liczba wieksza // 0 rowne // -1 druga liczba wieksza
        if(x[0]==x[2])                                              {rownosc=0;}
        else if(x[0].length()>=x[2].length())
        {
            if(x[0].length()>x[2].length())                         {rownosc=1;}
            else
            {
                for(int i=0;i<x[0].length();i++)
                {
                    if(x[0][i]>x[2][i])         {rownosc=1;break;}
                    else if(x[0][i]<x[2][i])    {rownosc=-1;break;}
                }
            }
        }

        else                                                        {rownosc=-1;}
        switch(x[1][0])
        {
            case '=': {if(rownosc==0)           {cout<<1<<endl;}else{cout<<0<<endl;}break;}
            case '!': {if(rownosc!=0)           {cout<<1<<endl;}else{cout<<0<<endl;}break;}
            case '>': {if(rownosc==1)           {cout<<1<<endl;}else{cout<<0<<endl;}break;}
            case '<': {if(rownosc==-1)          {cout<<1<<endl;}else{cout<<0<<endl;}break;}
        }
    }
    return 0;
}

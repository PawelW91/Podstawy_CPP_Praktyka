#include <iostream>

using namespace std;

int main()
{
    string x;
    while(getline(cin,x))
        {
            int ile_l=0,ile_s=0;
            for(int i=1;i<x.length();i++)
            {
                if(x[i]==' ')
                {
                    if(x[i-1]>='0'&&x[i-1]<='9')                {ile_l++;}
                    else {ile_s++;}
                }
            }
            if(x[x.length()-1]>='0'&&x[x.length()-1]<='9')       {ile_l++;}
                    else {ile_s++;}
            cout<<ile_l<<" "<<ile_s<<endl;
        }
    return 0;
}

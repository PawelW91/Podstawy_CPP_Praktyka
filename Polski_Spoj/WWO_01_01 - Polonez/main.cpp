#include <iostream>

using namespace std;

int main()
{
    int x[3],dz=0,ch=0;
    cin>>x[0]>>x[1]>>x[2];                  //wpisujemy ilu uczniow jest w kazdej klasie
    string y;
        for(int i=0;i<x[0];i++)             //liczymy ile dz/ch jest w klasie a
        {
            cin>>y;
            if(y[y.length()-1]=='a')        {dz+=1;}
            else                            {ch+=1;}
        }
        for(int i=0;i<x[1];i++)             //liczymy ile dz/ch jest w klasie a+b
        {
            cin>>y;
            if(y[y.length()-1]=='a')        {dz+=1;}
            else                            {ch+=1;}
        }
        for(int i=0;i<x[2];i++)             //liczymy ile dz/ch jest w klasie a+b+c
        {
            cin>>y;
            if(y[y.length()-1]=='a')        {dz+=1;}
            else                            {ch+=1;}
        }
        cout<<min(dz,ch)<<endl;             //odpowiedzia jest mniejsza liczba
    return 0;
}

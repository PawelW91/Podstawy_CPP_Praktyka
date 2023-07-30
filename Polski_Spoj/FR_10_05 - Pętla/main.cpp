#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    cin.ignore();
    while(ile_t--)
    {
        string x;
        getline(cin,x);
        int d[2]={0,0};
        int petla;

        for(int i=0;i<x.length();i++)
        {
            switch(x[i])
            {
                case 'N': d[0]+=1;break;
                case 'S': d[0]-=1;break;
                case 'E': d[1]+=1;break;
                case 'W': d[1]-=1;break;
            }
        }

        if (petla>0)
            {
                cout<<"TAK"<<endl;
            }
        else{cout<<"NIE"<<endl;}
    }
    return 0;
}

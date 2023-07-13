#include <iostream>

using namespace std;

int main()
{
    int x;
    while(cin>>x)
    {
        int kierunek=x;
        x=abs(x);
        char w[2*x][2*x];

                for(int i=0;i<(2*x);i++) //-zapelniam tablice kropkami
                {
                    for(int j=0;j<(2*x);j++)            {w[i][j]='.';}
                }
                for(int i=0;i<x;i++)  //- uzupelnienie gwiazdkami
                {
                    for(int j=i;j<x;j++)                {w[i][j]='*';}
                    for(int j=x*2-1;j>=(x*2-i-1);j--)   {w[i][j]='*';}
                }
                for(int i=x;i<x*2;i++)  //- uzupelnienie gwiazdkami
                {
                    for(int j=0; j<i-x+1;j++)           {w[i][j+x]='*';}
                    for(int j=0; j<x*2-i;j++)           {w[i][j]='*';}
                }

                if (kierunek>0)
                {
                    for(int i=0;i<(2*x);i++)  //- wypisanie dla prawoskretnego
                    {
                        for(int j=0;j<(2*x);j++)            {cout<<w[j][i];}
                        cout<<endl;
                    }
                }

                else if (kierunek<0)
                {
                    for(int i=0;i<(2*x);i++)  //- wypisanie dla lewoskretnego
                    {
                        for(int j=0;j<(2*x);j++)            {cout<<w[i][j];}
                        cout<<endl;
                    }
                }
                else if (x==0) exit(0);
    }
    return 0;
}

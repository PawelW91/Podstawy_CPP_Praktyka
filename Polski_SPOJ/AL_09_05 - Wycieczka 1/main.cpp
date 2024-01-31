#include <iostream>

using namespace std;

int main()
{
    int ile_t,n;
    cin>>ile_t;
    while(ile_t--)
    {
        cin>>n;
        int x[n][n];
        int y[n][n];
        int spr[n][n];
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cin>>x[i][j];
                }
            }
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cin>>y[i][j];
                }
            }
        if(x==y) cout<<"TAK"<<endl;

    }
    return 0;
}

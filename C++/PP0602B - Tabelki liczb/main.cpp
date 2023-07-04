#include <iostream>

using namespace std;

int main()
{
    int ile_t,l,k;
    cin>>ile_t;
    while(ile_t--)
    {
        cin>>l>>k;
        int x[l][k];
        for(int i=0;i<l;i++)
        {
            for (int j=0;j<k;j++)
            {
                cin>>x[i][j];
            }
        }

        int temp0=x[0][0];
        int temp1=x[l-1][k-1];
        for(int i=0;i<k;i++)
        {
            if (i==k-1)x[0][i]=x[1][i];
            else x[0][i]=x[0][i+1];
        }

        for(int i=k-1;i>=0;i--)
        {
            if (i==0)x[l-1][i]=x[l-2][i];
            else x[l-1][i]=x[l-1][i-1];
        }

        for(int i=l-2;i>0;i--)
        {
            if (i==1)x[i][0]=temp0;
            else x[i][0]=x[i-1][0];
        }

        for(int i=1;i<l-1;i++)
        {
            if (i==l-2)x[i][k-1]=temp1;
            else x[i][k-1]=x[i+1][k-1];
        }

        for(int i=0;i<l;i++)
        {
            for(int j=0;j<k;j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
        {
            int ile;
            cin>>ile;
            int x[ile];
            for (int i=0;i<ile;i++)
            {
                cin>>x[i];
            }
            for(int i=1;i<ile;i++)
                {
                    if (i%2!=0){cout<<x[i]<<" ";}
                }
            for(int i=0;i<ile;i++)
                {
                    if (i%2==0){cout<<x[i]<<" ";}
                }
                cout<<endl;
        }
    return 0;
}

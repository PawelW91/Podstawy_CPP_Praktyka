#include <iostream>

using namespace std;

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
          {
                int n,x,y,z;
                cin>>n>>x>>y;
                for(int i=0;i<n;i++)
                {
                    if(i%x==0 && i%y!=0){cout<<i<<" ";}
                }
                cout<<endl;
          }
    return 0;
}

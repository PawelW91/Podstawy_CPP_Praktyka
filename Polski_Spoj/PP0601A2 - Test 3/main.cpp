#include <iostream>

using namespace std;

int main()
{
    int x,ile=0,yes=0;
    while(true)
    {
        cin>>x;
        cout<<x<<endl;
        if (x==42)
        {
            if (yes==1)
            {
                ile++;
                yes=0;
            }
        }
        else {yes=1;}
        if (ile>2) break;
    }
    return 0;
}


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ile,x;
    cin>>ile;
    while(ile--)
    {
        cin>>x;
        if(x<=0)                                     cout<<"NIE"<<endl;
        else if(pow(x,0.5)==floor(pow(x,0.5)))      cout<<"TAK"<<endl;
        else                                        cout<<"NIE"<<endl;
    }
    return 0;
}

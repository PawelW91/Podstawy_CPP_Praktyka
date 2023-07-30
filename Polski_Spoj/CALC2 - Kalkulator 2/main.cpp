#include <iostream>

using namespace std;

int main()
{
    int X,Y,Z[100];
    char dzialanie;
    while(cin>>dzialanie>>X>>Y)
    {
        switch(dzialanie)
        {
            case 'z':Z[X]=Y;                  break;
            case '+':cout<<Z[X]+Z[Y]<<endl;   break;
            case '-':cout<<Z[X]-Z[Y]<<endl;   break;
            case '*':cout<<Z[X]*Z[Y]<<endl;   break;
            case '/':cout<<Z[X]/Z[Y]<<endl;   break;
            case '%':cout<<Z[X]%Z[Y]<<endl;   break;
        }
    }
    return 0;
}

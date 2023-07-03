#include <iostream>

using namespace std;

int main()
{
    int X,Y;
    char dzialanie;
    while(cin>>dzialanie>>X>>Y)
    {
        switch(dzialanie)
        {
            case '+':cout<<X+Y<<endl;   break;
            case '-':cout<<X-Y<<endl;   break;
            case '*':cout<<X*Y<<endl;   break;
            case '/':cout<<X/Y<<endl;   break;
            case '%':cout<<X%Y<<endl;   break;
        }
    }
    return 0;
}

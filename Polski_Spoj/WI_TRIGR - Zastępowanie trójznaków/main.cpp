#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    while(getline(cin,x))
    {
        for(int i=2;i<x.length();i++)
        {
            if (x[i-2]=='?' && x[i-1]=='?')
            {
                switch(x[i])
                {
                    case '=':	x.replace(i-2,3,"#");break;
                    case '/':	x.replace(i-2,3,"\\");break;
                    case '\'':	x.replace(i-2,3,"^");break;
                    case '(':	x.replace(i-2,3,"[");break;
                    case ')':	x.replace(i-2,3,"]");break;
                    case '!':	x.replace(i-2,3,"|");break;
                    case '<':	x.replace(i-2,3,"{");break;
                    case '>':	x.replace(i-2,3,"}");break;
                    case '-':	x.replace(i-2,3,"~");break;
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}

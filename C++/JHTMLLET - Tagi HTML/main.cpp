#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string x;
    while(getline(cin,x))
    {
        int l=x.length();
        for(int i=1;i<l;i++)
        {
            if (x[i-1]=='<')
            {
                while (x[i]!='>')
                {
                    x[i]=toupper(x[i]);
                    i++;
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    while (getline(cin,x))
    {
        while (x.find_first_of(' ')!= string::npos)
        {
            int l=0;
            l=x.length();
            for (int i=0;i<l-1;i++)
            {
                if (x[i]==' ')
                {
                    x.erase(i,1);
                    x[i]=toupper(x[i]);
                    l--;
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}

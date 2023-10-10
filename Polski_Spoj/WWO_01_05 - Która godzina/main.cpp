#include <iostream>
using namespace std;

int BinaryToDecimal(const string& binary)
{
    int decimal = 0;
    for (int i=0;i<binary.length();i++)
    {
        decimal=decimal*2+(binary[i]-'0');
    }
    return decimal;
}

int main()
{
    string x[4];
    int y[4];
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
        y[i]=BinaryToDecimal(x[i]);
    }
    for(int i=0;i<4;i++)
    {
        if(i==2) {cout<<":";}
        cout<<y[i];
    }
    cout<<endl;
    return 0;
}

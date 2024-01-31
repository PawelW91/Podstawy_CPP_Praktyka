#include <iostream>
#include <string>
using namespace std;

int HexToDec(char hex) {
    if (hex >= '0' && hex <= '9') return hex - '0';
    if (hex >= 'A' && hex <= 'F') return hex - 'A' + 10;
    if (hex >= 'a' && hex <= 'f') return hex - 'a' + 10;
    return 0;
}

int sum(const string hex) {
    int r = HexToDec(hex[1]) * 16 + HexToDec(hex[2]);
    int g = HexToDec(hex[3]) * 16 + HexToDec(hex[4]);
    int b = HexToDec(hex[5]) * 16 + HexToDec(hex[6]);

    return r+g+b;
}

int main() {
    string x;
    char t;
    while (cin>>t && t!='\n')
        {
            if (t=='#')
                {
                    x="#";
                    for (int i=0;i<6;i++)
                        {
                            cin>>t;
                            x+=t;
                        }
                    int y=sum(x);
                    cout<<(char)y;
                }
        }
}

/*
DRUGIE ROZWI¥ZANIE

#include <iostream>
#include <cmath>
using namespace std;

int toDec(char *s)
    {
        int dec=0;
        char numbers[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

        for(int i=0,n=1;i<2;i++)
            {
                int x=0;
                while(numbers[x]!=s[i]) {x++;}
                dec+=pow(16,n)*x;
                n--;
            }
        return dec;
    }

int main() {
	char c,hex[2];

	while(cin>>c && c!='\n')
        {
            int sum=0;
            for(int i=0;i<3;i++)
                {
                    hex[0]=cin.get();
                    hex[1]=cin.get();
                    sum+=toDec(hex);
                }
            cout<<(char)sum;
        }
}

*/



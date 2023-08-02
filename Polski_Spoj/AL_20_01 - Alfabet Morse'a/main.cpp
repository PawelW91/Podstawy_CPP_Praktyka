#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string x;
    while(getline(cin,x))
    {
        transform(x.begin(),x.end(),x.begin(),::toupper);           //zamiana wszystkich wprowadzonych w stringu liter na wielkie.
        for(int i=0;i<x.length();i++)
        {
            switch(x[i]){                                           //wypisanie symboli w zaleznosci od litery.
                case 'A': cout<<".-";       break;
                case 'B': cout<<"-...";     break;
                case 'C': cout<<"-.-.";     break;
                case 'D': cout<<"-..";      break;
                case 'E': cout<<".";        break;
                case 'F': cout<<".-..";     break;
                case 'G': cout<<"--.";      break;
                case 'H': cout<<"....";     break;
                case 'I': cout<<"..";       break;
                case 'J': cout<<".---";     break;
                case 'K': cout<<"-.-";      break;
                case 'L': cout<<"..-.";     break;
                case 'M': cout<<"--";       break;
                case 'N': cout<<"-.";       break;
                case 'O': cout<<"---";      break;
                case 'P': cout<<".--.";     break;
                case 'Q': cout<<"--.-";     break;
                case 'R': cout<<".-.";      break;
                case 'S': cout<<"...";      break;
                case 'T': cout<<"-";        break;
                case 'U': cout<<"..-";      break;
                case 'V': cout<<"...-";     break;
                case 'W': cout<<".--";      break;
                case 'X': cout<<"-..-";     break;
                case 'Y': cout<<"-.--";     break;
                case 'Z': cout<<"--..";     break;
            }
            cout<<"/";
        }
        cout<<endl;
    }
    return 0;
}

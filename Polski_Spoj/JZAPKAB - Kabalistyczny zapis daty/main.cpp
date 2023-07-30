#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    int rok=0;
    for (int i=0;i<x.length();i++)
    {
        switch(x[i])
        {
            case 'a': rok+=1;   break;
            case 'b': rok+=2;   break;
            case 'c': rok+=3;   break;
            case 'd': rok+=4;   break;
            case 'e': rok+=5;   break;
            case 'f': rok+=6;   break;
            case 'g': rok+=7;   break;
            case 'h': rok+=8;   break;
            case 'i': rok+=9;   break;
            case 'k': rok+=10;  break;
            case 'l': rok+=20;  break;
            case 'm': rok+=30;  break;
            case 'n': rok+=40;  break;
            case 'o': rok+=50;  break;
            case 'p': rok+=60;  break;
            case 'q': rok+=70;  break;
            case 'r': rok+=80;  break;
            case 's': rok+=90;  break;
            case 't': rok+=100; break;
            case 'v': rok+=200; break;
            case 'x': rok+=300; break;
            case 'y': rok+=400; break;
            case 'z': rok+=500; break;
        }
    }
    cout<<rok<<endl;
    return 0;
}


//ROZWI¥ZANIE II
/*
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string x;
    cin>>x;
    int rok=0;
    unordered_map<char, int> letterValues = {
        {'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6}, {'g', 7}, {'h', 8}, {'i', 9}, {'k', 10},
        {'l', 20}, {'m', 30}, {'n', 40}, {'o', 50}, {'p', 60}, {'q', 70}, {'r', 80}, {'s', 90}, {'t', 100},
        {'v', 200}, {'x', 300}, {'y', 400}, {'z', 500}};
    for (char c : x)
    {
        if (letterValues.count(c)>0)  {rok+=letterValues[c];}
    }
    cout<<rok<<endl;
    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
    int ileTestow, dzien;
    cin>>ileTestow;
    string kto[6]
    {
        "DAWID",
        "GRZESIEK",
        "MACIEK",
        "MARCIN",
        "MARIUSZ",
        "RAFAL"
    };

    while(ileTestow--)
    {
        cin>>dzien;
        switch((dzien-1)/7)
        {
            case 0:
            case 6: cout<<kto[0]<<endl;         break;
            case 1:
            case 7: cout<<kto[1]<<endl;         break;
            case 2:
            case 8: cout<<kto[2]<<endl;         break;
            case 3:
            case 9: cout<<kto[3]<<endl;         break;
            case 4:
            case 10:cout<<kto[4]<<endl;         break;
            case 5: cout<<kto[5]<<endl;         break;

        }
    }
    return 0;
}

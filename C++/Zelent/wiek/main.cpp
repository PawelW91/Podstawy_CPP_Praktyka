#include <iostream>

using namespace std;
int wiek;
int main()
{
    cout << "Ile masz lat: ";
    cin >> wiek;
    if(wiek <18)
       {
           cout << "Nie jestes pelnoletni i nie mozesz zostac prezydentem ;-(";
       }

        else if ((wiek>=18) &&(wiek<35))
             {
                 cout << "Wow jestes pelnoletni, niestety za mlody na prezydenta ;-(";

             }
             else {
                cout << "Na prezydenta!";
             }


    return 0;
}

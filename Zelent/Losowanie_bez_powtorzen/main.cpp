#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    int l[6];
    cout<<"Rozpoczynamy losownaie"<<endl;
    srand(time(NULL));

     for (int i=0;i<=5;++i)
        {
            int randomNumber=rand()%49+1;
            bool isDuplicate=false;

            for (int j=0;j<i;++j)
                {
                    if (l[j]==randomNumber)
                        {
                            isDuplicate=true;
                            break;
                        }
                }
            if (!isDuplicate)
                {
                    l[i]=randomNumber;
                    cout<<l[i]<<endl;
                }
            else
                {
                    --i; // Generuj now¹ liczbe, jezeli jest powtorzenie.
                }
        }
    return 0;
}


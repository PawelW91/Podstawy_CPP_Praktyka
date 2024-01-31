#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ile_t;
    cin >> ile_t;

    while (ile_t--)
    {
        string X;
        cin >> X;

        int l = X.length();
        int ile = 1;

        for (int i = 1; i <= l; i++)
        {
            if (i < l && X[i] == X[i - 1])
            {
                ile++;
            }
            else
            {
                cout << X[i - 1];

                if (ile >= 2)
                {
                    if (ile == 2)
                        {
                            cout << X[i - 1];
                        }
                    else cout << ile;
                }

                ile = 1;
            }
        }

        cout << endl;
    }

    return 0;
}

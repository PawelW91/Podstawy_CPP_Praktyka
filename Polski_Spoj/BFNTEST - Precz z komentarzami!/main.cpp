#include <iostream>

using namespace std;

int main()
{
    string x;
    bool inSingleLineComment = false;
    bool inMultiLineComment = false;

    while(getline(cin, x))
    {
        for(int i = 0; i < x.length(); i++)
        {
            if (inSingleLineComment) {
                // Je�li jeste�my wewn�trz jednolinijkowego komentarza, nie drukujemy znak�w
                break;
            }
            else if (inMultiLineComment) {
                // Je�li jeste�my wewn�trz wielolinijkowego komentarza, szukamy ko�ca komentarza (*/)
                if (x[i] == '*' && x[i + 1] == '/') {
                    inMultiLineComment = false;
                    i++;  // Przesuwamy si� o jeden znak dalej, aby omin�� '/'
                }
            }
            else {
                // Je�li nie jeste�my wewn�trz komentarza, sprawdzamy rodzaj komentarza
                if (x[i] == '/' && x[i + 1] == '/') {
                    inSingleLineComment = true;
                    break;  // Przerywamy, gdy� reszta linii to komentarz jednolinijkowy
                }
                else if (x[i] == '/' && x[i + 1] == '*') {
                    inMultiLineComment = true;
                    i++;  // Przesuwamy si� o jeden znak dalej, aby omin�� '*'
                }
                else {
                    cout << x[i];
                }
            }
        }
        cout << endl;

        // Je�li w danej linii byli�my w �rodku jednolinijkowego komentarza, resetujemy flag�
        inSingleLineComment = false;
    }

    return 0;
}

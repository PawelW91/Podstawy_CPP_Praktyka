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
                // Jeœli jesteœmy wewn¹trz jednolinijkowego komentarza, nie drukujemy znaków
                break;
            }
            else if (inMultiLineComment) {
                // Jeœli jesteœmy wewn¹trz wielolinijkowego komentarza, szukamy koñca komentarza (*/)
                if (x[i] == '*' && x[i + 1] == '/') {
                    inMultiLineComment = false;
                    i++;  // Przesuwamy siê o jeden znak dalej, aby omin¹æ '/'
                }
            }
            else {
                // Jeœli nie jesteœmy wewn¹trz komentarza, sprawdzamy rodzaj komentarza
                if (x[i] == '/' && x[i + 1] == '/') {
                    inSingleLineComment = true;
                    break;  // Przerywamy, gdy¿ reszta linii to komentarz jednolinijkowy
                }
                else if (x[i] == '/' && x[i + 1] == '*') {
                    inMultiLineComment = true;
                    i++;  // Przesuwamy siê o jeden znak dalej, aby omin¹æ '*'
                }
                else {
                    cout << x[i];
                }
            }
        }
        cout << endl;

        // Jeœli w danej linii byliœmy w œrodku jednolinijkowego komentarza, resetujemy flagê
        inSingleLineComment = false;
    }

    return 0;
}

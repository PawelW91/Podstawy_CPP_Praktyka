#include <iostream>

using namespace std;


int f(int n)
{
    if(n==0)return 3;
    else return f(n-1)+2;
}

long int potega(int p,int w)
{
        if(w==1) return p;
        else return p*potega(p,w-1);
}
long int fib (int n)
{
    if(n==1||n==2) return 1;
    else return fib(n-1)+fib(n-2);
}
long int silnia(int x)
{
    if(x==1) return 1;
    else return x*silnia(x-1);
}
int main()
{
    cout<<silnia(5)<<endl;

    return 0;
}

































/*#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"f(x)=";
    if(a!=0) cout<<a<<"x";
    if(b!=0) cout<<b<<endl;

    return 0;
}
*/

































/*#include <iostream>

using namespace std;
string login, haslo;

int main()
{
    cout << "Podaj login:";
    cin >> login;
    cout << "Podaj haslo:";
    cin >> haslo;
    if((login == "admin") && (haslo == "szarlotka"))
    {
        cout << "Zapraszamy ;-)";
        }
else
    {cout << "Niepoprawne dane logowanie.";}




    return 0;
}
*/

#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <time.h>

using namespace std;

clock_t start, stop;
double czas;
int ile;

int main()
{

    cout<<"Ile: ";
    cin>>ile;
    int *w;
    w=new int;
    for(int i=0;i<ile;i++)
    {

        cout<<(int)w<<endl;
        w++;
    }
    delete[] w;

    return 0;
}

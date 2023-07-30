#include <iostream>
#include <math.h>
#include <sstream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{

    string W; //dane wejsciowe
    getline(cin,W);
    replace(W.begin(), W.end(), ',', '.'); //zamiana przecinkow na kropki w inpucie
    double r; //promien sfery
    double d; //odleglosc miedzy srodkami sfery

    istringstream  iss(W);
    iss>>r>>d;

    double x; //promien szukanego kola
    double S; //pole szukanego kola
    double pi=3.141592654; //double pi=M_PI;

    //r*r=(0.5*d)*(0.5*d)+x*x;
    //x=sqrt(r*r-(0.5*d)*(0.5*d));
    S=pi*pow((sqrt(r*r-(0.5*d)*(0.5*d))),2);
    cout<<fixed<<setprecision(2)<<S<<endl;
    return 0;
}

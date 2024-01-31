#include<iostream>
#include<string>
#include<map>

using namespace std;

//Nie ma du¿o palindromów - po wypisaniu wszystkich na kartce - stwierdzi³em, ¿e ³atwiej bêdzie znale¿æ warunek kiedy wypisaæ palindrom, ni¿ pisaæ skomplikowan¹ funkcê która to bêdzie liczy³a.
//PóŸniej spróbujê znaleŸæ zale¿noœæ i skróciæ kod.
string ggmm(int gg, int mm)                         //wyznaczenie palindromu i zamiana na format GG:MM;
{
    string g,m;


    if (gg == 0) {
    if (mm < 9) {mm += 1;}
    else if (mm < 11) {mm = 11;}
    else if (mm < 22) {mm = 22;}
    else if (mm < 33) {mm = 33;}
    else if (mm < 44) {mm = 44;}
    else if (mm < 55) {mm = 55;}
    else{gg += 1;mm = 1;}
    }
    else if (gg == 1) {
    if (mm < 1) {mm = 1;}
    else if (mm < 11) {mm = 11;}
    else if (mm < 21) {mm = 21;}
    else if (mm < 31) {mm = 31;}
    else if (mm < 41) {mm = 41;}
    else if (mm < 51) {mm = 51;}
    else{gg += 1;mm = 2;}
    }
    else if (gg == 2) {
    if (mm < 2) {mm = 2;}
    else if (mm < 12) {mm = 12;}
    else if (mm < 22) {mm = 22;}
    else if (mm < 32) {mm = 32;}
    else if (mm < 42) {mm = 42;}
    else if (mm < 52) {mm = 52;}
    else{gg += 1;mm = 3;}
    }
    else if (gg == 3) {
    if (mm < 3) {mm = 3;}
    else if (mm < 13) {mm = 13;}
    else if (mm < 23) {mm = 23;}
    else if (mm < 33) {mm = 33;}
    else if (mm < 43) {mm = 43;}
    else if (mm < 53) {mm = 53;}
    else{gg += 1;mm = 4;}
    }
    else if (gg == 4) {
    if (mm < 4) {mm = 4;}
    else if (mm < 14) {mm = 14;}
    else if (mm < 24) {mm = 24;}
    else if (mm < 34) {mm = 34;}
    else if (mm < 44) {mm = 44;}
    else if (mm < 54) {mm = 54;}
    else{gg += 1;mm = 5;}
    }
    else if (gg == 5) {
    if (mm < 5) {mm = 5;}
    else if (mm < 15) {mm = 15;}
    else if (mm < 25) {mm = 25;}
    else if (mm < 35) {mm = 35;}
    else if (mm < 45) {mm = 45;}
    else if (mm < 55) {mm = 55;}
    else{gg += 1;mm = 6;}
    }
    else if (gg == 6) {
    if (mm < 6) {mm = 6;}
    else if (mm < 16) {mm = 16;}
    else if (mm < 26) {mm = 26;}
    else if (mm < 36) {mm = 36;}
    else if (mm < 46) {mm = 46;}
    else if (mm < 56) {mm = 56;}
    else{gg += 1;mm = 7;}
    }
    else if (gg == 7) {
    if (mm < 7) {mm = 7;}
    else if (mm < 17) {mm = 17;}
    else if (mm < 27) {mm = 27;}
    else if (mm < 37) {mm = 37;}
    else if (mm < 47) {mm = 47;}
    else if (mm < 57) {mm = 57;}
    else{gg += 1;mm = 8;}
    }
    else if (gg == 8) {
    if (mm < 8) {mm = 8;}
    else if (mm < 18) {mm = 18;}
    else if (mm < 28) {mm = 28;}
    else if (mm < 38) {mm = 38;}
    else if (mm < 48) {mm = 48;}
    else if (mm < 58) {mm = 58;}
    else{gg += 1;mm = 9;}
    }
    else if (gg == 9) {
    if (mm < 9) {mm = 9;}
    else if (mm < 19) {mm = 19;}
    else if (mm < 29) {mm = 29;}
    else if (mm < 39) {mm = 39;}
    else if (mm < 49) {mm = 49;}
    else if (mm < 59) {mm = 59;}
    else{gg += 1;mm = 1;}
    }
    else if(gg>9 && gg<24){
    if      (gg==10 && mm<1)    {gg=10;mm=1;}
    else if (gg==10 && mm>=1)   {gg=11;mm=11;}
    else if (gg==11 && mm<11)   {gg=11;mm=11;}
    else if (gg==11 && mm>=11)  {gg=12;mm=21;}
    else if (gg==12 && mm<21)   {gg=12;mm=21;}
    else if (gg==12 && mm>=21)  {gg=13;mm=31;}
    else if (gg==13 && mm<31)   {gg=13;mm=31;}
    else if (gg==13 && mm>=31)  {gg=14;mm=41;}
    else if (gg==14 && mm<41)   {gg=14;mm=41;}
    else if (gg==14 && mm>=41)  {gg=15;mm=51;}
    else if (gg==15 && mm<51)   {gg=15;mm=51;}
    else if (gg==15 && mm>=51)  {gg=20;mm=2;}
    else if (gg>15 && gg<20)    {gg=20;mm=2;}
    else if (gg==20 && mm<2)    {gg=20;mm=2;}
    else if (gg==20 && mm>=2)   {gg=21;mm=12;}
    else if (gg==21 && mm<12)   {gg=21;mm=12;}
    else if (gg==21 && mm>=12)  {gg=22;mm=22;}
    else if (gg==22 && mm<22)   {gg=22;mm=22;}
    else if (gg==22 && mm>=22)  {gg=23;mm=32;}
    else if (gg==23 && mm<32)   {gg=23;mm=32;}
    else if (gg==23 && mm>=32)  {gg=0;mm=0;}
    }

    g=(gg<10) ? "0"+to_string(gg) : to_string(gg);
    m=(mm<10) ? "0"+to_string(mm) : to_string(mm);
    return g+":"+m;
}

int main() {

    int ile_t;
    cin>>ile_t;
    cin.ignore();
    while(ile_t--)
    {
        string godz;
        getline(cin,godz);

        int gg,mm;
        gg=stoi(godz.substr(0,2));
        mm=stoi(godz.substr(3,2));

        string formated_time=ggmm(gg,mm);
        cout<<formated_time<<endl;
    }
    return 0;
}

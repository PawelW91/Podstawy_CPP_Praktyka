#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ile_t;
    cin >> ile_t;

    while (ile_t--) {
        double A, B, C, D, A1, B1, C1, D1;
        cin >> A1 >> B1 >> C1 >> D1;

        A = max(A1, B1);
        B = min(A1, B1);
        C = max(C1, D1);
        D = min(C1, D1);


                if(((A>C)&&(B>D))||((A>D)&&(B>C))){
                    cout << "TAK" << endl;
                }
                    else{
                        if(((A<=C)&&(B<=D))||((A<=D)&&(B<=C))){
                            cout << "NIE" << endl;
                        }
                        else{
                                double d1,d2;
                                d1=sqrt(pow(A,2)+pow(B,2));
                                d2=sqrt(pow(C,2)+pow(D,2));

                                if (d1<=d2){cout<<"NIE"<<endl;}
                                else{
                                        double a,b,c;
                                        a = 0.5*A-sqrt(pow(0.5*d2,2)-pow(0.5*B,2));
                                        b = 0.5*B-sqrt(pow(0.5*d2,2)-pow(0.5*A,2));
                                        c = sqrt(a*a+b*b);

                                        if(c>D) cout<<"TAK"<<endl;
                                        else cout<<"NIE"<<endl;
                                }
                        }
                    }
    }

    return 0;
}

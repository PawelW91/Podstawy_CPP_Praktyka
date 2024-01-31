#include <iostream>

using namespace std;
void quicksort (int*tablica,int lewy, int prawy)
{

    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
        do{
            while (tablica[i]<v)i++;
            while(tablica[j]>v)j--;
            if(i<=j){
                    x=tablica[i];
                    tablica[i]=tablica[j];
                    tablica[j]=x;
                    i++;j--;
                    }
        }while(i<=j);
        if (j>lewy) quicksort(tablica,lewy,j);
        if (i<prawy) quicksort(tablica,i,prawy);
}
int main() {

    int x[4],y[4];
    for(int i=0;i<4;i++)            {cin>>x[i]>>y[i];}
    int P1,P2,PW;
    P1=(x[1]-x[0])*(y[1]-y[0]);
    P2=(x[3]-x[2])*(y[3]-y[2]);
    if((x[0]>x[3]||x[2]>x[1])||(y[0]>y[3]||y[2]>y[1]))
    {
        cout<<P1+P2<<endl;
    }
        else
        {
            quicksort(x,0,3);
            quicksort(y,0,3);
            PW=(x[2]-x[1])*(y[2]-y[1]);
            P1=P1+P2-PW;
            cout<<P1<<endl;
        }
    return 0;
}

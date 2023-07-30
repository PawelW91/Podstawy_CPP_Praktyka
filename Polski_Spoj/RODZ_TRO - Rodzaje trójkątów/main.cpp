#include <iostream>
#include <math.h>
#include <algorithm>
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
	int x[3];
	while(cin>>x[0]>>x[1]>>x[2])
    {
	quicksort(x,0,2);
	if(x[2]<x[0]+x[1])
	{
		if((x[2]*x[2])==((x[0]*x[0])+(x[1]*x[1])))	            {cout<<"prostokatny"<<endl;}
		else if((x[2]*x[2])<((x[0]*x[0])+(x[1]*x[1])))           {cout<<"ostrokatny"<<endl;}
		else                                                {cout<<"rozwartokatny"<<endl;}

	}
	else {cout<<"brak"<<endl;}
    }
		return 0;
}

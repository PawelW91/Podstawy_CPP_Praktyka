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

int main()
{
    int ile_t;
    cin>>ile_t;
    while(ile_t--)
    {
        int ile,y=0,z=0;
        cin>>ile;
        int x[ile];
        for(int i=0;i<ile;i++)
        {
            cin>>x[i];
            if(x[i]==y){z++;}
            if(x[i]>y){y=x[i];z=1;}
        }
        for(int j=0;j<z;j++)
        {
            cout<<y<<" ";
        }
        quicksort(x,0,ile-1);
        for (int i=0;i<(ile-z);i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

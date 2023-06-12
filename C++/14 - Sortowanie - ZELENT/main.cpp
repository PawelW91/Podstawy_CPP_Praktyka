#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;
int ile;
clock_t start, stop;
double czas;

void sortowanie_babelkowe(int *tab,int n)
{
    for (int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
            int bufor;
            bufor=tab[j-1];
            tab[j-1]=tab[j];
            tab[j]=bufor;
            }
        }
    }
}
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

void sortowanie_shella(int* tab, int n)
{
  int przerwa = n / 2;
  while(przerwa >= 1) {
    for (int i = przerwa; i < n; i += 1) {
      int temp = tab[i];
      int j;
      for (j = i; j >= przerwa && tab[j - przerwa] > temp; j -= przerwa)
        tab[j] = tab[j - przerwa];
      tab[j] = temp;
    }
    przerwa /= 2;
  }
}

int main()
{
    cout << "Porownanie czasow sortowania v1" << endl;
    cout << "Ile losowych liczb w tablicy: ";
    cin>>ile;

    //Dynamiczna alokacja tablicy
    int *tablica;
    tablica = new int [ile];

    int *tablica2;
    tablica2=new int [ile];

    int *tablica3;
    tablica3=new int [ile];

    //inicjowanie generatora
    srand(time(NULL));

    //wczytywanie losowych liczb do tablicy
    for (int i=0; i<ile; i++) {tablica[i]=rand()%100000+1;}

    //Przepisanie tablica=>tablica2 & tablica3, aby zachowaæ dane do porównania.
    for (int i=0; i<ile; i++) {tablica2[i]=tablica[i];}
    for (int i=0; i<ile; i++) {tablica3[i]=tablica[i];}

//    cout<<"Przed posortowaniem: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica3[i]<<" "<<endl;

    cout<<"Sortuje teraz babelkowo. Prosze czekac!"<<endl;
    start=clock();
    sortowanie_babelkowe(tablica,ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica[i]<<" "<<endl;
//    cout<<"Ciekawy ile czasu minelo??"<<endl;
    cout<<"Prosze: "<<czas<<"s"<<endl;
    // Koniec sortowania babelkowego.

//============================================================================================================================================================================================

    //Sortowanie quicksort:
//    cout<<"Przed posortowaniem: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica2[i]<<" "<<endl;
    cout<<"Sortuje teraz w quicksort. Prosze czekac!"<<endl;
    start=clock();
    quicksort(tablica2,0,ile-1);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica2[i]<<" "<<endl;
 //   cout<<"Ciekawy ile czasu minelo??"<<endl;
    cout<<"Prosze: "<<czas<<"s"<<endl;
    //Koniec quicksortowania.

//============================================================================================================================================================================================

    //Sortowanie Shella:
    cout<<"Sortuje teraz w Shell'em. Prosze czekac!"<<endl;
    start=clock();
    sortowanie_shella (tablica3,ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica3[i]<<" "<<endl;
    cout<<"Prosze: "<<czas<<"s"<<endl;

    delete[]tablica;
    delete[]tablica2;
    delete[]tablica3;

    return 0;
}

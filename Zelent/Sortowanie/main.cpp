#include <iostream>
#include <time.h>
#include <windows.h>

//PORÓWNANIE CZASU WYKONANIA RÓ¯NYCH ALGORYTMÓW DO SORTOWANIA

using namespace std;

//============================================================================================================================================================================================

void sortowanie_BubleSort(int *tab,int n)
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

//============================================================================================================================================================================================

void sortowanie_QuickSort (int *tablica,int lewy,int prawy)
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
        if (j>lewy) sortowanie_QuickSort(tablica,lewy,j);
        if (i<prawy) sortowanie_QuickSort(tablica,i,prawy);
}

//============================================================================================================================================================================================

void sortowanie_ShellSort(int *tab,int n)
{
  int przerwa=n/2;
  while(przerwa>=1)
    {
        for (int i=przerwa;i<n;i+=1) {
          int temp=tab[i];
          int j;
          for (j=i;j>=przerwa&&tab[j-przerwa]>temp;j-=przerwa)
            tab[j]=tab[j-przerwa];
            tab[j]=temp;
        }
        przerwa/=2;
    }
}

//============================================================================================================================================================================================

void sortowanie_InsertionSort(int arr[],int n)
{
    for (int i=1;i<n;++i)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
}

//============================================================================================================================================================================================

void sortowanie_SelectionSort(int arr[],int n)
{
    for (int i=0;i<n-1;++i) {
        int minIdx=i;
        for (int j=i+1;j<n;++j)
            {
                if (arr[j]<arr[minIdx])
                    minIdx=j;
            }
        swap(arr[minIdx],arr[i]);
    }
}

//============================================================================================================================================================================================

void heapify(int arr[],int N,int i)
{

    // Initialize largest as root
    int largest=i;
    // left = 2*i + 1
    int l=2*i+1;
    // right = 2*i + 2
    int r=2*i+2;
    // If left child is larger than root
    if (l<N&&arr[l]>arr[largest])
        largest=l;
    // If right child is larger than largest
    // so far
    if (r<N&&arr[r]>arr[largest])
        largest=r;
    // If largest is not root
    if (largest!=i)
        {
            swap(arr[i],arr[largest]);
            // Recursively heapify the affected
            // sub-tree
            heapify(arr,N,largest);
        }
}
// Main function to do HeapSort
void sortowanie_HeapSort(int arr[],int N)
{
    // Build heap (rearrange array)
    for (int i=N/2-1;i>=0;i--)
        heapify(arr,N,i);
    // One by one extract an element
    // from heap
    for (int i=N-1;i>0;i--)
    {
        // Move current root to end
        swap(arr[0],arr[i]);
        // call max heapify on the reduced heap
        heapify(arr,i,0);
    }
}

//============================================================================================================================================================================================

void merge(int arr[],int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1],R[n2];

    for (int i=0;i<n1;++i)
        L[i]=arr[left+i];
    for (int j=0;j<n2;++j)
        R[j]=arr[mid+1+j];
    int i=0,j=0,k=left;
    while (i<n1&&j<n2)
        {
            if (L[i]<=R[j])
                {
                    arr[k] = L[i];
                    ++i;
                }
            else
                {
                    arr[k] = R[j];
                    ++j;
                }
            ++k;
        }

    while (i<n1)
        {
            arr[k]=L[i];
            ++i;
            ++k;
        }

    while (j<n2)
        {
            arr[k]=R[j];
            ++j;
            ++k;
        }
}
// Main function to do MergeSort
void sortowanie_MergeSort(int arr[],int left,int right)
{
    if (left<right)
        {
            int mid=left+(right-left)/2;
            sortowanie_MergeSort(arr,left,mid);
            sortowanie_MergeSort(arr,mid+1,right);
            merge(arr,left,mid,right);
        }
}

//============================================================================================================================================================================================

int getMax(int arr[],int n)
{
    int max=arr[0];
    for (int i=1;i<n;++i)
        {
            if (arr[i]>max)
                max=arr[i];
        }
    return max;
}
void countSort(int arr[],int n,int exp)
{
    int output[n];
    int count[10]={0};
    for (int i=0;i<n;++i)
        ++count[(arr[i]/exp)% 10];
    for (int i=1;i<10;++i)
        count[i]+=count[i-1];
    for (int i=n-1;i>=0;--i)
        {
            output[count[(arr[i]/exp)%10]-1]=arr[i];
            --count[(arr[i]/exp)%10];
        }
    for (int i=0;i<n;++i)
        arr[i]=output[i];
}
// Main function to do RadixSort
void sortowanie_RadixSort(int arr[],int n)
{
    int max=getMax(arr,n);
    for (int exp=1;max/exp>0;exp*=10)
        countSort(arr,n,exp);
}

//============================================================================================================================================================================================

int ile;
double czas;
clock_t start, stop;

int main()
{
    cout<<"Porownanie czasow sortowania v2"<<endl;
    cout<<"Ile losowych liczb w tablicy: ";
    cin>>ile;
    cout<<endl;

//  Dynamiczna alokacja tablicy
    int *tablica;
    tablica = new int [ile];
    int *tablica2;
    tablica2=new int [ile];
    int *tablica3;
    tablica3=new int [ile];
    int *tablica4;
    tablica4=new int [ile];
    int *tablica5;
    tablica5=new int [ile];
    int *tablica6;
    tablica6=new int [ile];
    int *tablica7;
    tablica7=new int [ile];

//  inicjowanie generatora
    srand(time(NULL));

//  wczytywanie losowych liczb (1-100.000) do jednakowych tablic aby kazdy algorytm dostal identyczne dane wejœciowe
    for (int i=0; i<ile; i++)
        {
            tablica[i]=rand()%100000+1;
            tablica2[i]=tablica[i];
            tablica3[i]=tablica[i];
            tablica4[i]=tablica[i];
            tablica5[i]=tablica[i];
            tablica6[i]=tablica[i];
            tablica7[i]=tablica[i];
        }

//    cout<<"Przed posortowaniem: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica1[i]<<" "<<endl;

//  PONIZEJ SA ALGORYTMY SORTUJACE

//============================================================================================================================================================================================

//  Sortowanie Babelkowe:
    cout<<"Sortuje teraz w BubleSort. Prosze czekac!"<<endl;
    start=clock();
    sortowanie_BubleSort(tablica,ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica[i]<<" "<<endl;
//    cout<<"Ciekawy ile czasu minelo??"<<endl;
    cout<<"Czas potrzebny na wykonanie sortowania tym algorytmem to: "<<czas<<"s"<<endl<<endl;

//============================================================================================================================================================================================

//  Sortowanie Quicksort:
    cout<<"Sortuje teraz w Quicksort. Prosze czekac!"<<endl;
    start=clock();
    sortowanie_QuickSort(tablica2,0,ile-1);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica2[i]<<" "<<endl;
//    cout<<"Ciekawy ile czasu minelo??"<<endl;
    cout<<"Czas potrzebny na wykonanie sortowania tym algorytmem to: "<<czas<<"s"<<endl<<endl;

//============================================================================================================================================================================================

//  Sortowanie Shella:
    cout<<"Sortuje teraz w ShellSort. Prosze czekac!"<<endl;
    start=clock();
    sortowanie_ShellSort (tablica3,ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica3[i]<<" "<<endl;
    cout<<"Czas potrzebny na wykonanie sortowania tym algorytmem to: "<<czas<<"s"<<endl<<endl;

//============================================================================================================================================================================================

//  Sortowanie HeapSort:
    cout<<"Sortuje teraz w HeapSort. Prosze czekac!"<<endl;
    start=clock();
    sortowanie_HeapSort (tablica4,ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica4[i]<<" "<<endl;
    cout<<"Czas potrzebny na wykonanie sortowania tym algorytmem to: "<<czas<<"s"<<endl<<endl;

//============================================================================================================================================================================================

//  Sortowanie SelectionSort:
    cout<<"Sortuje teraz w SelectionSort. Prosze czekac!"<<endl;
    start=clock();
    sortowanie_SelectionSort (tablica5,ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica5[i]<<" "<<endl;
    cout<<"Czas potrzebny na wykonanie sortowania tym algorytmem to: "<<czas<<"s"<<endl<<endl;

//============================================================================================================================================================================================

//  Sortowanie MergeSort:
    cout<<"Sortuje teraz w MergeSort. Prosze czekac!"<<endl;
    start=clock();
    sortowanie_MergeSort (tablica6,0,ile-1);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica6[i]<<" "<<endl;
    cout<<"Czas potrzebny na wykonanie sortowania tym algorytmem to: "<<czas<<"s"<<endl<<endl;

//============================================================================================================================================================================================

//  Sortowanie RadixSort:
    cout<<"Sortuje teraz w RadixSort. Prosze czekac!"<<endl;
    start=clock();
    sortowanie_RadixSort (tablica7,ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
//    cout<<"Po sortowaniu: "<<endl;
//    for (int i=0; i<ile; i++) cout<<tablica6[i]<<" "<<endl;
    cout<<"Czas potrzebny na wykonanie sortowania tym algorytmem to: "<<czas<<"s"<<endl<<endl;

//============================================================================================================================================================================================

    delete[]tablica;
    delete[]tablica2;
    delete[]tablica3;
    delete[]tablica4;
    delete[]tablica5;
    delete[]tablica6;
    delete[]tablica7;

    return 0;
}

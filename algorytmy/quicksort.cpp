#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

int *RandomTable(int);
void Swap(int*, int, int);

void TestQuickSort();
void QuickSort(int*, int, int, int*);
long double QuickSortStatistics(int, int);



int main()
{
    srand(time(NULL));
    TestQuickSort();
    return 0;
}

void TestQuickSort(){
    ofstream file("quicksort.dat", ios::app);
    for(int length=10; length<1001; length+=10){
    long double srednia = QuickSortStatistics(length, 1000);
    cout<<length<<" "<<srednia<<endl;

        file<<length<<" "<<srednia<<endl;
    }
    file.close();
}

long double QuickSortStatistics(int length, int maximum){
    int porownanie = 0;
    double suma = 0;
    long double srednia = 0;
    for(int i=0; i<maximum; i++){
        int *tab = RandomTable(length);
        porownanie = 0;
        QuickSort(tab, 0, length-1, &porownanie);
        suma=suma+porownanie;
        delete [] tab;
    }
    srednia=suma/maximum;
    return srednia;
}

void QuickSort(int *tab, int left, int right, int *porownanie){

    if(left<right)
    {
        (*porownanie)++;
        int pos = left;
        int i = left+1;

        while(i<=right)
        {
                if(tab[i]<tab[left])
                {
                    (*porownanie)++;
                    pos=pos+1;
                    Swap(tab, pos, i);
                    i+=1;
                }
                else
                {
                    (*porownanie)++;
                    i+=1;
                }
        }
        if(i>right)
        {
                Swap(tab, pos, left);
                QuickSort(tab, left, pos-1, porownanie);
                QuickSort(tab, pos+1, right, porownanie);
        }
    }
}

int *RandomTable(int length){
    int *tab = new int [length];
        for(int i=0; i<length; i++)
        tab[i]=rand()%(1001);

    return tab;
}

void Swap(int *tab, int i, int j){
    int temp=tab[i];
    tab[i]=tab[j];
    tab[j]=temp;
}

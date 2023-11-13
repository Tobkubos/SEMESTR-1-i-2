#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

int *RandomTable(int);
void Swap(int*, int, int);

void TestBinarySearch();
void QuickSort(int*, int, int);
long double QuickSortStatistics(int, int);
int LosujIndex(int);

int BinarySearch(int *tab, int length, int s);


int main()
{
    srand(time(NULL));
    TestBinarySearch();
    return 0;
}



BinarySearch(int *tab, int length, int s){

int left = 0;
int right =(length-1);
int mid = 0;
int porownanie = 0;

    while(left<=right){
        mid=(left+right)/2;

        if(tab[mid]==s){
            porownanie++;
            return porownanie;
        }

        if(tab[mid]<s){
            porownanie++;
            left = mid+1;
        }
        else{
            porownanie++;
            right = mid-1;
        }

    }
    return -1;
}


void TestBinarySearch(){
    ofstream file("BinarySearch.dat", ios::app);
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
        QuickSort(tab, 0, length-1);
        int s = LosujIndex(length);
        porownanie = BinarySearch(tab, length, tab[s]);
        suma=suma+porownanie;
        delete [] tab;
    }
    srednia=suma/maximum;
    return srednia;
}

void QuickSort(int *tab, int left, int right){

    if(left<right)
    {
        int pos = left;
        int i = left+1;

        while(i<=right)
        {
                if(tab[i]<tab[left])
                {
                    pos=pos+1;
                    Swap(tab, pos, i);
                    i+=1;
                }
                else
                {
                    i+=1;
                }
        }
        if(i>right)
        {
                Swap(tab, pos, left);
                QuickSort(tab, left, pos-1);
                QuickSort(tab, pos+1, right);
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

int LosujIndex(int length){
    int r;
    do{
        r=rand();
    }while(r>length-1);

    return r;
}

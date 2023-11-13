#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

int *RandomTable(int);
void TestBubbleSort1();
int BubbleSort1(int*, int);
long double BubbleSortStatistics1(int, int);

void TestBubbleSort2();
int BubbleSort2(int*, int);
long double BubbleSortStatistics2(int, int);
void Swap(int*, int, int);




int main(){

srand(time(NULL));

TestBubbleSort1();
TestBubbleSort2();


return 0;
}

void TestBubbleSort1(){
    ofstream file("bubblesort1.dat.txt", ios::app);
    for(int length=10; length<1001; length+=10){
    double srednia = BubbleSortStatistics1(length, 1000);
    cout<<length<<" "<<srednia<<endl;

        file<<length<<" "<<srednia<<endl;
    }
    file.close();
}

long double BubbleSortStatistics1(int length, int maximum){
    double suma = 0;
    long double srednia = 0;
    for(int i=0; i<maximum; i++){
        int *tab = RandomTable(length);
        int sorted = BubbleSort1(tab, length);
        suma+=sorted;
    }
    srednia=suma/maximum;
    return srednia;
}

int BubbleSort1(int *tab, int length){


    int bbsort = 0;
    bool ch = 0;
    do{
        ch = 0;
        for(int i=0; i<length-1; i++){
            bbsort++;
            if(tab[i]>tab[i+1])
            {
                ch = 1;
                Swap(tab, i, i+1);
            }
        }
    }while(ch != 0);
    return bbsort;
}



void TestBubbleSort2(){
    ofstream file("bubblesort2.dat.txt", ios::app);
    for(int length=10; length<1001; length+=10){
    double srednia = BubbleSortStatistics2(length, 1000);
    cout<<length<<" "<<srednia<<endl;

        file<<length<<" "<<srednia<<endl;
    }
    file.close();
}

long double BubbleSortStatistics2(int length, int maximum){
    double suma = 0;
    long double srednia = 0;
    for(int i=0; i<maximum; i++){
        int *tab = RandomTable(length);
        int sorted = BubbleSort2(tab, length);
        suma+=sorted;
    }
    srednia=suma/maximum;
    return srednia;
}

int BubbleSort2(int *tab, int length){


    int bbsort = 0;
    bool ch = 0;
    int p = 0;
    do{
        ch = 0;
        for(int i=0; i<length-p-1; i++){
            bbsort++;
            if(tab[i]>tab[i+1])
            {
                ch = 1;
                Swap(tab, i, i+1);
            }
            else
                p+=1;
        }
    }while(ch != 0);
    return bbsort;
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

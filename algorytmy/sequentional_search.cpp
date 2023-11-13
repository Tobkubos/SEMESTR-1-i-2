#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

int *RandomTable(int);
int SequentialSearch(int*, int, int);
int LosujIndex(int);
void TestSearch();
double SequentialSearchStatistics(int, int);



int main(){

srand(time(NULL));

TestSearch();


return 0;
}

void TestSearch(){
    ofstream file("wyszukiwanie.dat.txt", ios::app);
    for(int length=10; length<1001; length+=10){
    double srednia = SequentialSearchStatistics(length, 100);
    cout<<length<<" "<<srednia<<endl;

        file<<length<<" "<<srednia<<endl;
    }
    file.close();
}

double SequentialSearchStatistics(int length, int maximum){
    float suma = 0;
    double srednia = 0;
    for(int i=0; i<maximum; i++){
        int *tab = RandomTable(length);
        int idx = LosujIndex(length);
        int s = tab[idx];
        int porownanie = SequentialSearch(tab, length, s);
        suma = suma + porownanie;
    }
    srednia=suma/100;
    return srednia;
}

int LosujIndex(int length){
    int r;
    do{
        r=rand();
    }while(r>length-1);

    return r;
}

int SequentialSearch(int *tab, int length, int s){
    int p;
    for(int i=0; i<length; i++)
    {
        if(tab[i]==s)
        p=i+1;
    }
    delete[] tab;
    return p;
}

int *RandomTable(int length){
    int *tab = new int [length];
        for(int i=0; i<length; i++)
        tab[i]=rand()%(1001);

        bool powtorka=false;
        int licznik =0;
        int i;
do{
    powtorka=false;
    i = rand()%(1001);

    for(int l=0; l<length; l++){
    if(tab[l]==i)
    powtorka=true;
    }

    if(powtorka==false){
    tab[licznik]=i;
    licznik++;
    }

}while(licznik<length);

    return tab;
}








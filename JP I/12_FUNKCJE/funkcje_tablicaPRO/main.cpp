#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Losuj(int start, int stop);
void LosujTab(int r, int tab[]);
void TabDisp(int r, int tab[]);
int TabMax(int r, int tab[]);
int TabMin(int r, int tab[]);
void TabSort(int r, int tab[]);


    int start = 0;
    int stop = 999;



int main()
{

    srand(time(NULL));
    int const r=100;
    int tab[r];

    LosujTab(r, tab);
    TabDisp(r, tab);
cout<<endl<<"MAKSIMUM = "<<endl;
cout<<"MINIMUM = "<<endl;
    TabSort(r, tab);
    TabDisp(r, tab);
    return 0;
}


//LOSOWANIE
int Losuj(int start, int stop){
return rand()%(stop-start+1)+start;
}

//LOSOWANIE TABLICY
void LosujTab(int r, int tab[]){
    for(int i=0; i<r; i++)
    tab[i]=Losuj(start, stop);
}

//WYSWIETLANIE

void TabDisp(int r, int tab[]){
    cout<<endl;
    for(int i=0; i<r; i++){
        if(Losuj(start, stop)<10){
        cout<<"   "<<tab[i];
        }
        else if(Losuj(start, stop)<100){
        cout<<"  "<<tab[i];
        }
        else{
        cout<<"  "<<tab[i];
    }
    }
    cout<<endl;
}

int TabMax(int r, int tab[]){

}
int TabMin(int r, int tab[]){

}


//SORTOWANIE
void TabSort(int r, int tab[]){
    bool sortowanie = true;

    do{
        for(int m=0; m<100 ; m++)
            for(int n=1; n<100; n++)
                if(tab[n-1]>tab[n]){
                    sortowanie = true;
                    swap( tab[n-1], tab[n] );
                    }
                else if(tab[n-1]<tab[n]){
                sortowanie = false;
                }
    }while(sortowanie == true);

}

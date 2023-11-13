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


    int start = -999;
    int stop = 999;



int main()
{

    srand(time(NULL));
    int const r=100;
    int tab[r];

    LosujTab(r, tab);
    TabDisp(r, tab);
cout<<endl<<"MAKSIMUM = "<<TabMax(r, tab)<<endl;
cout<<"MINIMUM = "<<TabMin(r, tab)<<endl<<endl;
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

int o =0;

    for(int i=0; i<r; i++){

            if(tab[i]<10 && tab[i]>=0 ){
            cout<<"    "<<tab[i];
            }
            else if(tab[i]<100 && tab[i]>=10) {
            cout<<"   "<<tab[i];
            }
            else if(tab[i]<1000 && tab[i]>=100){
            cout<<"  "<<tab[i];
            }
            //UJEMNE
            else if(tab[i]>=-999 && tab[i]<=-100){
            cout<<" "<<tab[i];
            }
             else if(tab[i]>=-99 && tab[i]<=-10){
            cout<<"  "<<tab[i];
            }
              else if(tab[i]>=-9 && tab[i]<0){
            cout<<"   "<<tab[i];
            }

            else
            cout<<" "<<tab[i];

            o++;
            if(o==10){
                cout<<endl;
                o=0;
            }
    }
    cout<<endl;
}

int TabMax(int r, int tab[]){
    int maks = tab[0];
    for(int i=1; i<r; i++){
    if(tab[i]>maks)
    maks=tab[i];
    }
    return maks;
}
int TabMin(int r, int tab[]){
    int mini = tab[0];
    for(int i=1; i<r; i++){
    if(tab[i]<mini)
    mini=tab[i];
    }
    return mini;
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

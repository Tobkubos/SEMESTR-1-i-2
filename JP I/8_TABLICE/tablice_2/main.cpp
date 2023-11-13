#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;


int main()
{

int a;
int b;
int l;
int i;
int tab[100];
float suma;
srand(time(NULL));

    cout<< "Podaj poczatek zakresu losowania: "<<endl;
    cin>> a;
    cout<< "Podaj koniec zakresu losowania: "<<endl;
    cin>> b;
    cout<< "ILOSC LICZB: "<<endl;
    cin>> l;


cout<<"wylosowane liczby to: "<<endl;

    for(int j=0; j<l; j++){

    i = rand()%(b-a)+a;
    cout<<i<<", ";
    tab[j]=i;
    }

    for(int a=0; a<l; a++){

    suma=suma+tab[a];
    }

cout<<endl<<"Srednia to: "<< suma/l<<endl;


return 0;
}

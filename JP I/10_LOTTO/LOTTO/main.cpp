#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;


int main()
{

int i;
int liczba=0;
int powtarza=false;

int tab[6];
srand(time(NULL));

  cout<<"Wylosowane liczby to: "<<endl;
do{
    powtarza=false;
    i = rand()%(49)+1;


    for(int j; j<6; j++)
        {
        if(i==tab[j]) powtarza=true;
        }
        if(powtarza==false)
        {
            tab[liczba]=i;
            liczba++;

        }
    }while (liczba<6);

    for(int k=0; k<6; k++)
        {
        cout<<tab[k]<<", ";
        }
return 0;
}


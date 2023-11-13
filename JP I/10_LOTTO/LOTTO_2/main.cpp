#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
time(NULL);
srand(time(NULL));
int i;
int j;
int tab[6];
int liczba=0;
int powtorka=false;

cout<<"WYLOSOWANE LICZBY: "<<endl<<endl;
do{
    powtorka=false;
    i = rand()%(49)+1;

    for(int l=0; l<liczba; l++){
    if(tab[l]==i)
    powtorka=true;
    }

    if(powtorka==false){
    tab[liczba-1]=i;
    liczba++;
    }

}while(liczba<7);

for(int k=0; k<6; k++){
    cout<<tab[k]<< endl;
}
    return 0;
}

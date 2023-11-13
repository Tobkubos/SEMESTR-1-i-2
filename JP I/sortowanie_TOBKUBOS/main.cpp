#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    using namespace std;

    int tablica[100];

    float liczba;
    int a=1;
    int b=999;
    int c=0;

    const int rozmiar=100;
    float liczby[rozmiar];

    srand(time(NULL));

    cout<<"TABLICA PRZED SORTOWANIEM"<<endl;

    for(int i=0; i<100; i++)
    {
        tablica[i]=rand()%(999-1)+1;
    }

    for(int i=0; i<100; i++)
    {
        cout<<tablica[i]<<" ";
    }
    cout<<endl<<endl<<endl;


    cout<<"SORTOWANIE BABELKOWE"<<endl<<endl<<endl;


 bool sortowanie = true;
 int o=0;
 int licznik =0;

 /*bool sprawdzacz=0;
    do
    {
    for(int i=0; i<99;i++)
    {
         int licznik=0;
        for(int j=0; j<100;j++)
        {
            if(tablica[j]>tablica[j+1])
                    swap(tablica[j],tablica[j+1]);
                    licznik++;
        }
        if(licznik==0) sprawdzacz=1;
    }
    } while(sprawdzacz==1);

*/


    do{
        for(int m=0; m<100 ; m++)
            for(int n=1; n<100; n++)
                if(tablica[n-1]>tablica[n]){
                    sortowanie = true;
                    swap( tablica[n-1], tablica[n] );
                    o++;
                    }
                else if(tablica[n-1]<tablica[n]){
                sortowanie = false;
                }
    }while(sortowanie == true);


  /*
        do{
        for(int m=0; m<100 ; m++)
            for(int n=1; n<100; n++)
                if(tablica[n-1]>tablica[n]){
                    sortowanie = true;
                    swap( tablica[n-1], tablica[n] );
                    o++;
                    }
                else if(tablica[n-1]<tablica[n]){
                sortowanie = false;
                }
    }while(sortowanie == true);

*/


    cout<<"TABLICA PO SORTOWANIU"<<endl;
for(int p=0; p<100; p++)
        cout<<tablica[p]<<" ";
        cout<<endl<<o;

}

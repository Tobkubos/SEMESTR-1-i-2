#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int liczby[100];
    time(NULL);
    srand(time(NULL));
    int i;
    int a;
    int b;
    int c;



    cout<< "Podaj poczatek zakresu losowania: "<<endl;
    cin>> a;
    cout<< "Podaj koniec zakresu losowania: "<<endl;
    cin>> b;

    cout << "Wylosowane liczba to: "<< endl;
    for(int c=0; c<100; c++){
    i = rand()%(b-a+1)+a;
    cout<<i<<" ";
    }

//WYLICZYC SREDNIA!!!!
    return 0;
}

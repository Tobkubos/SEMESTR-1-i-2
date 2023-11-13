#include <iostream>

using namespace std;

void wypis(int a, int liczba, int *adr_liczby, int *wskaznik);

int main()
{

    int liczba;
    int *wskaznik;

    wypis(1, liczba, &liczba, wskaznik);

    liczba = 1;

    wypis(2, liczba, &liczba, wskaznik);

    wskaznik = &liczba;

    wypis(3, liczba, &liczba, wskaznik);

    *wskaznik = 2;

    wypis(4, liczba, &liczba, wskaznik);

    return 0;
}

void wypis(int a, int liczba, int *adr_liczby, int *wskaznik){

    cout<<a<<" liczba to: "<<liczba<<" jej adres to: "<<adr_liczby<<" wskaznik pokazuje: "<<wskaznik<<endl;
}

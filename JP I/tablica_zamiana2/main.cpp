#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    int i;
    int tab[i];
    fstream f;


    cout << "ILE LICZB MA BYC POBRANE..?" << endl;
    cin>>i;

    f.open("kol.txt", ios::in);
    int a, licznik=0;
    while(f>>a){
    tab[licznik]=a;
    licznik++;
    cout<< a;
    }


    return 0;
}
/*
Program 2.
Program pobiera liczby z pliku kol.txt do tablicy i ma funkcjonalno�� jak aplikacja �2.exe�.
U�ytkownik podaje ile liczb ma by� pobrane.
Program tworzy tablic� o odpowiednim rozmiarze i wype�nia j� liczbami (u�ycie tablicy statycznej jest b��dem).
Pobierane s� liczby z pocz�tku pliku i wpisywanie s� do tablicy w kolejno�ci pobierania.
Program wy�wietla liczby z wype�nionej tablicy (po kolei).
Dodatkowo program jest zabezpieczony przed sytuacj�, gdy w pliku jest za ma�o liczb (wtedy informuje o problemie i ko�czy dzia�anie).
Nast�pnie program buduje drug� tablic� o rozmiarze o jeden wi�ksz�, przepisuje do niej liczby z pierwszej, a na ostatni� pozycj� wstawia liczb� kontroln�.
Liczba kontrolna to 0, je�eli suma wszystkich liczb jest parzysta lub 1, je�eli suma jest nieparzysta.
*/


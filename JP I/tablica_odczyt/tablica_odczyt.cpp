#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    int i;
    cout << "ILE LICZB MA BYC POBRANE..?" << endl;
    cin>>i;
        if(i>20){
        cout<<"NIE MA TYLU LICZB!"<<endl;
        return 0;
        }

    int tab1[i];
    int tab2[i+1];
    int suma=0;

    fstream f;
    f.open("kol.txt", ios::in);
    int a, licznik=0;

    while(f>>a && licznik<i){
    tab1[licznik]=a;
    cout<< tab1[licznik]<<" ";
    licznik++;
    }

    cout<<endl;

    for(int b=0; b<i; b++){
    tab2[b]=tab1[b];
    cout<< tab2[b]<<" ";
    suma=suma+tab2[b];
    }

cout<<endl<<suma;

    if(suma%2==0){
    tab2[i]=0;
    cout<<tab2[i];
    }
    else{
    tab2[i]=1;
    cout<<tab2[i];
    }




    return 0;
}
/*
Program 2.
Program pobiera liczby z pliku kol.txt do tablicy i ma funkcjonalnoœæ jak aplikacja „2.exe”.
U¿ytkownik podaje ile liczb ma byæ pobrane.
Program tworzy tablicê o odpowiednim rozmiarze i wype³nia j¹ liczbami (u¿ycie tablicy statycznej jest b³êdem).
Pobierane s¹ liczby z pocz¹tku pliku i wpisywanie s¹ do tablicy w kolejnoœci pobierania.
Program wyœwietla liczby z wype³nionej tablicy (po kolei).
Dodatkowo program jest zabezpieczony przed sytuacj¹, gdy w pliku jest za ma³o liczb (wtedy informuje o problemie i koñczy dzia³anie).
Nastêpnie program buduje drug¹ tablicê o rozmiarze o jeden wiêksz¹, przepisuje do niej liczby z pierwszej, a na ostatni¹ pozycjê wstawia liczbê kontroln¹.
Liczba kontrolna to 0, je¿eli suma wszystkich liczb jest parzysta lub 1, je¿eli suma jest nieparzysta.
*/


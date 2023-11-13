#include <iostream>

using namespace std;



void WIERSZ(int szerokosc, string znak){
        for(int x=0; x<szerokosc; x++){
        cout<<znak;
        }
        cout<<endl;
        }

void RYSOWANIE(int wysokosc, int szerokosc, string znak){
        for(int x=0; x<wysokosc; x++)
        WIERSZ(szerokosc, znak);
        }

void ZNAK(int szerokosc, int wysokosc){
        string znak;
        cout<<"Podaj znak do rysowania... "<<endl;
        cin>>znak;
        RYSOWANIE(wysokosc, szerokosc, znak);
        }

void PROSTOKAT(){
        int szerokosc;
        int  wysokosc;
        cout<< "Bedziemy rysowac prostokat... "<<endl;
        cout<< "Podaj szerokosc i wysokosc...: "<<endl;
        cin>>szerokosc;
        cin>>wysokosc;
        ZNAK(szerokosc, wysokosc);
        }

int main()
{
    PROSTOKAT();
    return 0;
}




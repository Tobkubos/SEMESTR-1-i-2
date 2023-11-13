#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int liczba;
string Imie;

int main(){
 cout <<"Podaj liczbe "<<endl;
    cin>>liczba;
    cout <<"Podaj imie "<<endl;
    cin>>Imie;

    for(int x=1; x<=liczba; x++){
    cout <<x<<". "<<Imie <<endl;

}
 return 0;
}


#include <iostream>

using namespace std;




int main(){
int szer, wys, dlugosc;
char znak;
cout<<"Bedziemy rysowac prostokat. Podaj szerokosc i wysokosc...;"<<endl;

cin>>szer;
cin>>wys;

cout<<"Podaj znak do rysowania"<<endl;
cin>>znak;

for(int i=0; i<wys; i++){
    wiersz(szer, znak+i);
}
}
void wiersz(int dlugosc, char znak){
    for(int i=0; i<dlugosc; i++)
        cout<<znak;
}

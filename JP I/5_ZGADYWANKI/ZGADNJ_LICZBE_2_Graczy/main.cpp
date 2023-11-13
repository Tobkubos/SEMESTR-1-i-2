#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

 int i;
 int liczba;
 int podejscie=1;
 string gracz1, gracz2;

//---nazwa---------------------------
cout<<endl;
cout<<"=-=-=-=-=-=-=-=-="<<endl;
cout<<"ZGADYWANKA  LICZB"<<endl;
cout<<"=-=-=-=-=-=-=-=-="<<endl;
cout<<endl;


//---nicki---------------------------
cout<<"Nick pierwszego gracza: ";
cin>>gracz1;
cout<<"Nick drugiego gracza: ";
cin>>gracz2;
cout<<endl;

//---liczba do zgadniecia------------
cout<<gracz1<<" podaj liczbe do zgadniecia dla "<<gracz2<<":"<<endl<<endl;
cout<<"LICZBA: ";
cin>>liczba;
system("CLS");
cout<<endl;
cout<<gracz2<<" ZGADUJ!"<<endl<<"BEDE LICZYL TWOJE PODEJSCIA!!!"<<endl<<endl;
cin>>i;
cout<<endl;

//---zgadywanie i liczba podejsc------
while(i!=liczba){
        if(i<liczba)
        cout<<"HAHAHA to za malo!"<<endl;
        else
        cout<<"HAHAHA to za duzo!"<<endl;

        cout<<"To twoje "<<podejscie++<<" podejscie"<<endl<<endl;
        cout<<"Zgadnij Liczbe ponownie ";
        cout<<endl;
        cin>>i;
        cout<<endl;
}

//---koniec----------------------------
cout<<endl<<endl<<endl<<endl<<endl;
cout<<"ZGADLES! BYLA TO LICZBA "<<liczba<<endl;
cout<<"UDALO CI SIE ZA "<< podejscie<<" RAZEM!"<<endl;
return 0;

}

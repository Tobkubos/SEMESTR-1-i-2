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

//---liczba do zgadniecia------------
cout<<"podaj liczbe do zgadniecia: "<<endl<<endl;
cin>>liczba;
system("CLS");
cout<<endl;
cout<<" ZGADUJ!"<<endl<<"BEDE LICZYL TWOJE PODEJSCIA!!!"<<endl<<endl;
cin>>i;
cout<<endl;

//---zgadywanie i liczba podejsc------
while(i!=liczba){
        if(i<liczba)
        cout<<"HAHAHA to za malo!"<<endl;
        else
        cout<<"HAHAHA to za duzo!"<<endl;
        podejscie++;

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

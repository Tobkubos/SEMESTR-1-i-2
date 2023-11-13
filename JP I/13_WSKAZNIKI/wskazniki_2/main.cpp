#include <iostream>

using namespace std;


void zerowanieWartosc(int liczba){
cout<<"wartosc :"<<endl;
 liczba =0;
 return;
}

void zerowanieWskaznik(int *liczba){
    cout<<"wskaznik :"<<endl;
    *liczba=0;
    return;
}

void zerowanieReferencja(int *liczba){
    cout<<"referencja :"<<endl;
    *liczba=0;
    return;
}


int main()
{
 int liczba;

 liczba=11;
 cout<<liczba<<endl;
 zerowanieWartosc(liczba);
 cout<<liczba<<endl<<endl;


 liczba=11;
 cout<<liczba<<endl;
 zerowanieWskaznik(liczba);
 cout<<liczba<<endl<<endl;


  liczba=11;
 cout<<liczba<<endl;
 zerowanieReferencja(liczba);
 cout<<liczba<<endl<<endl;


    return 0;
}

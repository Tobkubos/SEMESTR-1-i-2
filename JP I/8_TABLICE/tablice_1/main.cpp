#include <iostream>

using namespace std;

int main()
{
  int tablica[2];
      tablica[0]=1;
      tablica[1]=10;

cout<<"Elementy tablicy to: "<<tablica[0]<< " i "<< tablica[1];

const int rozmiar=5;
float liczby[rozmiar]={ 1.1 , 2.2 , 3.3};
cout<<endl<<"Elementy tablicy liczby to: ";

for(int i=0; i<rozmiar; i++)
      cout<<liczby[i]<<" ";
      return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
 int i=0;
 int tab[100];
 int k=0;
 float srednia;

 cout<<"WYLOSOWANE LICZBY TO: "<<endl;

 srand(time(NULL));

 for(int j=0; j<100; j++){
    i=rand()%1000;
    cout<<i<<" ";
    tab[j]=i;
 }

 for(int a=0; a<100; a++){
    k=k+tab[a];
 }

 srednia=k/100;
 cout<<endl<<"Srednia tych liczb to: "<<srednia<<endl<<endl;

 for(int b=0; b<100; b=b+3){
    cout<<tab[b]<<" ";
 }
   return 0;
}

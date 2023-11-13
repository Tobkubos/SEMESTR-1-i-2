#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    int liczby[9999];
    time(NULL);
    srand(time(NULL));
    int i;
    int a;
    int b;
    int c;
    float suma=0;
    int l;
    float moyai;



    cout<< "Podaj poczatek zakresu losowania: "<<endl;
    cin>> a;
    cout<< "Podaj koniec zakresu losowania: "<<endl;
    cin>> b;
    cout<< "ILOSC LICZB: "<<endl;
    cin>> l;

    cout << "Wylosowane liczba to: "<< endl;
    for(int c=0; c<l; c++){
        if(a==b)
        cout<<a;
        else{
        i = rand()%(b-a)+a;
        cout<<i<<" ";
        }
        suma = suma + i;

    }
   moyai=suma/l;
   cout<<endl<<"SREDNIA Z TYCH LICZB TO: "<<moyai<<endl<<endl;






    return 0;
}

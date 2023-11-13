#include <iostream>

using namespace std;

float tabela[10];
float suma, srednia;

int main()
{
    for(int i=0; i<10; i++)
    {
    cout<< endl<<"Podaj ocene: ";
    cin>> tabela[i];
    suma = suma + tabela[i];
    }
    srednia = suma/10;
    cout<<endl<<"srednia = "<<srednia;


    return 0;
}

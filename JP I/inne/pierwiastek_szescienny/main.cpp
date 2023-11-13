#include <iostream>
#include <math.h>

using namespace std;
int i, wynik;

int main()
{
    cout << "Podaj liczbe z ktorej mam wyliczyc pierwiastek szescienny: " << endl;
    cin>>i;

    wynik=cbrt(i);

    cout<< wynik;
    return 0;
}

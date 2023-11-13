#include <iostream>

using namespace std;

int dodawanie(int a, int b);
void wypisz(int liczba);




int main()
{
wypisz(dodawanie(44,66));
return 0;
}


int dodawanie (int a, int b)
{
int suma;
suma=a+b;
return suma;
}

void wypisz (int liczba)
{
    cout<<liczba<<endl;
}

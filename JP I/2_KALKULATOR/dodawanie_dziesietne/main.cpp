#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  float a=0;
  float b=0;
  float c=0;

  cout << "Podaj liczbe..." <<endl;
  cin >> a;

  cout << "Podaj druga liczbe..." <<endl;
  cin >> b;

  c=a+(float)b/10;

   cout << endl << "Nowa liczba to: " << c;
  getch();
  return 0;
}

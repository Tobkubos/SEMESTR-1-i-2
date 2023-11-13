/*----------------------------------------------------------------------
// Typy i Deklaracje - PUBLIC - Materialy
//
// operator inkrementacji ++.
//
// ver data       temat                                            autor
// 100 2010/11/14 Pierwszy projekt                          J.Malinowski
// 101 2012/09/21 Zmiana prezentacji wyniku                           JM
// 102 2014/10/02 Cleanup                                             JM
//--------------------------------------------------------------------*/

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
   int  x, y = 3;
   cout << "x= " << x << "\ny= " << y << "\n\n";

   x = ++y;
   x += y++;      //    x = x+y++;

   cout<<"\n\n  x = ++y;\n  x += y++;\n\n";

   cout<<"x=  ?\ny=  ?\n\n";
   cout<<"press any key to continue\n\n";
   getch();

   cout<<"  x = "<< x <<endl;
   cout<<"  y = "<< y <<endl;

   getch();
   return 0;
}
//======================================================================

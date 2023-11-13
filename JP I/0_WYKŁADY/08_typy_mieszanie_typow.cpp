/*----------------------------------------------------------------------
//
// Typy i Deklaracje - PUBLIC - Materialy
//
// mieszanie typow.
//
// ver data       temat                                            autor
// 100 2010/11/14 Pierwszy projekt                          J.Malinowski
//--------------------------------------------------------------------*/

#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
   double x1, x2;
   int  i = 0;

   while(i++ < 10) {
      cout<<"i = "<< i ;
      x1 = 1.0 / (double)i ;
      x2 = 1.0 / double(i);
      cout<<"      1 / i   = "<< x1 ;
      cout<<"      1.0 / i = "<< x2 <<endl;
   }
i = x1;
   getch();
   return 0;
}

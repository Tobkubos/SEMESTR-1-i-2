/*----------------------------------------------------------------------
//// Typy i Deklaracje - PUBLIC - Materialy
//
// instrukcja SWITCH
//
// ver data       temat                                            autor
// 100 2010/11/14 Pierwszy projekt                          J.Malinowski
//--------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#include <conio.h>                  // UWAGA, biblioteka niestandardowa;

//======================================================================
int main()
{
   cout<<"\n\n  Jaki napis pokaze sie na ekranie ?\n\n";
   cout<<"  press any key to continue\n\n";
   getch();


   int  i = 1;
   switch ( i ) {

      case 1: cout<<" Ala ";

      case 2: cout<<" ma ";
              break;

      case 3: cout<<" kota ";

      default: cout<<" Oli ";
   }

   getch();
   return 0;
}
//======================================================================

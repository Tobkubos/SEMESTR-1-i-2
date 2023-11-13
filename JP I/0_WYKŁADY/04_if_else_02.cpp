//======================================================================
// Ilustracja dzialania instrukcji cuklu.
//
// ver data       temat                                            autor
// 100 2010/11/14 Pierwszy projekt                          J.Malinowski
// 101 2019/08/22 Cleanup                                             JM
//======================================================================

#include <iostream>
#include <math.h>

using namespace std;

//======================================================================

int main(int argc, char *argv[])
{
   double i1, i2;
   cout << "Podaj dwie liczby zmiennoprzecinkowe: ";
   cin >> i1;
   cin >> i2;
//----------------------------------------------------------------------   
   if( i1 < i2 ) {
       cout << "i1 mniejsze od i2\n";
   }
   else {
       cout << "i1 wieksze od i2\n";
   }
//----------------------------------------------------------------------   
   if( i1 == i2 ) {                     // UWAGA - niebezpieczenstwo!
       cout << "i1 == i2\n";
   }
//----------------------------------------------------------------------   
   if( fabs( i1 - i2 ) < 1e-30 ) {      // OK.
       cout << "i1 == i2\n";
   }
//----------------------------------------------------------------------   

    system("PAUSE");
    return 0;
}
//======================================================================

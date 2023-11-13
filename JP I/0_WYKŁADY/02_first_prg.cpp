//======================================================================
// Pierwszy program
//
// ver data       temat                                            autor
// 100 2010/11/14 Pierwszy projekt                          J.Malinowski
// 101 2015/10/03 Cleanup                                             JM
// 102 2020/10/15 Cleanup; stdio.h added                              JM
//======================================================================

#include <cstdlib>
#include <stdio.h>

#include <iostream>
using namespace std;

//======================================================================

int main(int argc, char *argv[])
{
   int n, x;

   cout << "wpisz liczbe calkowita: ";
   cin >> n;
   cout << "n= " << n << endl;

   printf( "wpisz liczbe calkowita: " );
   scanf( "%d", &x );
   printf( "x= %d\n", x );

//----------------------------------------------------------------------   
   double dn, dx;

   cout << "wpisz liczbe zmiennoprzecinkowa: ";
   cin >> dn;
   cout << "dn= " << dn << endl;

   printf( "wpisz 2+ga liczbe zmiennoprzecinkowa: " );
   scanf( "%lf", &dx );
   printf( "dx= %lf\n", dx );

//----------------------------------------------------------------------   
    system("PAUSE");
    return 0;
}

//======================================================================

//======================================================================
// Ilustracja dzialania instrukcji cuklu.
//
// ver data       temat                                            autor
// 100 2010/11/14 Pierwszy projekt                          J.Malinowski
//======================================================================

#include <iostream>
using namespace std;

//======================================================================

int main(int argc, char *argv[])
{
   double T[100]= {1.1, 2.2, 3.3, 4.3};
   int i, n=4;
   cout << "Mamy liczby:\n";
   for(i=0; i<n; i++)
   {
      cout << T[i] << "  ";
   }
   cout << endl;

//--- Cykl  for --------------------------------------------------------   
   double S1=0.0;
   for(i=0; i<n; i++)
   {
      S1 = S1 + T[i];
   }
   cout << "S1== " << S1 << endl;

//--- Cykl  while ------------------------------------------------------   
   double S2=0.0;
   i = 0;
   while( i<n )
   {
      S2 = S2 + T[i];
      i++;
   }
   cout << "S2== " << S2 << endl;

//--- Cykl  do-while ---------------------------------------------------   
   double S3=0.0;
   i = 0;
   do
   {
      S3 = S3 + T[i];
      i++;
   } while( i<n );
   cout << "S3== " << S3 << endl;

//----------------------------------------------------------------------   
    system("PAUSE");
    return EXIT_SUCCESS;
}
//======================================================================

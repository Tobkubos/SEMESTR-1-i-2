#include <iostream>
#include <windows.h>
#include <math.h>
#include <iomanip>

using namespace std;

long double fib[10000];
int n;

int main()
{

cout<<"Podaj liczbe wyrazow ciagu Fibonacciego do wyznaczenia: ";
cin>>n;
if(n<0)
    cout<<"WARTOSC NIE MOZE BYC MNIEJSZA LUB ROWNA ZERO"<<endl;

fib[0]=1;
fib[1]=1;

for(int i=2; i<n; i++){
fib[i]=fib[i-1]+fib[i-2];
}
cout<<setprecision(1000);

for(int i=0; i<n; i++){
cout<<fib[i]<<endl;
}
   return 0;
}

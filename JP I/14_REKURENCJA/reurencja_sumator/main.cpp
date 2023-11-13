#include <iostream>

using namespace std;

void odlicz(int, int);


int main()
{
    int suma=0;
    odlicz(10,suma);
    return 0;
}

void odlicz (int num, int suma){

    suma=suma+num;
cout<<num<< " / " <<suma<<endl;

    if(num==0)

    return;
    odlicz(num-1, suma);

    return;

}

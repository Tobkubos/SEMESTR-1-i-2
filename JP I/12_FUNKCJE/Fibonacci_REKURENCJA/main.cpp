#include <iostream>

using namespace std;

int Fibon(int);


int main()
{
    int n=30;
    cout << Fibon(n)<<endl;
    return 0;
}

int Fibon(int n){
    if(n==0)
        return 0;


    if(n==1)
    return 1;
    return Fibon(n-2)+Fibon(n-1);

}

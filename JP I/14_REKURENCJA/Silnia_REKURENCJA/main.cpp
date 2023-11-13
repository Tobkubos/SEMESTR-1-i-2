#include <iostream>

using namespace std;

int silnia(int);


int main()
{
    int n=10;
    cout << n << "! = "<<silnia(n)<<endl;
    return 0;
}

int silnia(int n){
    if(n==0)
    return 1;

    return n*silnia(n-1);
}

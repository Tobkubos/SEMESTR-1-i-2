#include <iostream>

using namespace std;
int x,y;
char program;


int main(){

    cout << "KALKULATOR"<< endl;
    cin>> x;
    cin>> program;
    cin>> y;

switch(program){

    case '+':
    cout<<"Wynik = " <<x+y;
    break;

    case '-':
    cout<<"Wynik = " <<x-y;
    break;

    case '/':
    cout<<"Wynik = " <<x/y;
    break;

    case '*':
    cout<<"Wynik = " <<x*y;
    break;

    default:
    cout<<"???"<<endl;
}
}

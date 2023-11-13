#include <iostream>

using namespace std;
int x,y;
char program;


int main(){

    cout << "Wybierz dzialanie: "<< endl;
    cin>> program;

switch(program){
    case '+':
    cout<< "Podaj liczbe x i y"<< endl;
    cin >> x;
    cin >> y;
    cout<<"Wynik = " <<x+y;
    break;

    case '-':
    cout<< "Podaj liczbe x i y"<< endl;
    cin >> x;
    cin >> y;
    cout<<"Wynik = " <<x-y;
    break;

    case '/':
    cout<< "Podaj liczbe x i y"<< endl;
    cin >> x;
    cin >> y;
    cout<<"Wynik = " <<x/y;
    break;

    case '*':
    cout<< "Podaj liczbe x i y"<< endl;
    cin >> x;
    cin >> y;
    cout<<"Wynik = " <<x*y;
    break;

    default:
    cout<<"???"<<endl;
}
}

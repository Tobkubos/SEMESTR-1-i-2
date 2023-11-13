#include <iostream>

using namespace std;
int x,y;
int program;


int main(){


    cout << "1. Dodawanie"<< endl;
    cout << "2. Odejmowanie"<< endl;
    cout << "3. Dzielenie"<< endl;
    cout << "4. Mnozenie"<< endl;
    cout << "Wybierz program: "<< endl;
    cin>> program;

switch(program){
    case 1:
    cout<< "Wybrano program 1. Dodawanie"<< endl;
    cout<< "Podaj liczbe x i y"<< endl;
    cin >> x;
    cin >> y;
    cout<<"Wynik = " <<x+y;
    break;

    case 2:
    cout<< "Wybrano program 1. Odejmowanie"<< endl;
    cout<< "Podaj liczbe x i y"<< endl;
    cin >> x;
    cin >> y;
    cout<<"Wynik = " <<x-y;
    break;

    case 3:
    cout<< "Wybrano program 3. Dzielenie"<< endl;
    cout<< "Podaj liczbe x i y"<< endl;
    cin >> x;
    cin >> y;
    cout<<"Wynik = " <<x/y;
    break;

    case 4:
    cout<< "Wybrano program 4. Mnozenie"<< endl;
    cout<< "Podaj liczbe x i y"<< endl;
    cin >> x;
    cin >> y;
    cout<<"Wynik = " <<x*y;
    break;

    default:
    cout<<"???"<<endl;
}
}

#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;
float x,y;
int program;


int main(){

for(;;){

    cout << "1. Dodac dwie liczby"<< endl;
    cout << "2. Podzielic dwie liczby"<< endl;
    cout << "3. Pomnozyc dwie liczby"<< endl;
      cout << "4. Wyjdz"<< endl;
    cout << "Wybierz program: "<< endl;
    cin>> program;

switch(program){
case 1:
cout<< "Wybrano program 1. Suma"<< endl;
cout<< "Podaj liczbe x i y"<< endl;
cin >> x;
cin >> y;
cout<<"Suma = " <<x+y;
break;

case 2:
cout<< "Wybrano program 2. Dzielenie"<< endl;
cout<< "Podaj liczbe x i y"<< endl;
cin >> x;
cin >> y;
cout<<"Dzielenie = " <<x/y;
break;

case 3:
cout<< "Wybrano program 3. Mno¿enie"<< endl;
cout<< "Podaj liczbe x i y"<< endl;
cin >> x;
cin >> y;
cout<<"Mno¿enie = " <<x*y;
break;

case 4:
    exit(0);
    break;

}
getchar();getchar();
system("cls");
}

return 0;
}

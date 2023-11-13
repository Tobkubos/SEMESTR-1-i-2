#include <iostream>

using namespace std;
float x,y;
char program;

float potega(float x,float y);
float dodawanie(float x,float y);
float odejmowanie(float x,float y);
float mnozenie(float x,float y);
float dzielenie(float x,float y);

int main(){

    cout << "KALKULATOR"<< endl;
    cin>> x;
    cin>> program;
    cin>> y;

switch(program){

    case '+':
    cout<<dodawanie(x, y)<<endl;
    break;

    case '-':
    cout<<odejmowanie(x, y)<<endl;
    break;

    case '/':
    cout<<dzielenie(x, y)<<endl;
    break;

    case '*':
    cout<<mnozenie(x, y)<<endl;
    break;

    case '^':
    cout<<potega(x, y)<<endl;
    break;

    default:
    cout<<"???"<<endl;
}
}
float dodawanie(float x,float y){
    float wynik;
    wynik=x+y;
    return wynik;
}

float odejmowanie(float x,float y){
    float wynik;
    wynik=x-y;
    return wynik;
}

float mnozenie(float x,float y){
    float wynik;
    wynik=x*y;
    return wynik;
}

float dzielenie(float x,float y){
 //   float wynik;
 //   wynik=x/y;
 //   return wynik;
while(y==0){
    cout<<"Nie dzielimy przez 0!, Podaj inna liczbe"<<endl;
    cin>>y;
}
    return x/y;
}

float potega(float x, float y){
    float wynik=1;
        for(int i=0; i<y; i++)
        wynik=x*wynik;
    return wynik;
}



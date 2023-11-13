#include <iostream>

using namespace std;


void Zmiana(float a, float b, float c, float d){
    float e=0;
    float f=0;
    e=a+b+c+d;
    f=a*b*c*d;
    Wyswietl(a, b, e, f);
    }

int Wyswietl(float a, float b, float c, float d){
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    Zmiana(a, b, c, d);
    }



int main()
{
    float a, b, c, d;
    cout << "Podaj cztery liczby..." << endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<endl<<"Podane liczby to: "<<endl;

    Wyswietl(a, b, c, d);
    Zmiana(a, b, c, d);

    cout<<endl<<"Liczby po zmianie: "<<endl;

    Wyswietl();
    return 0;
}

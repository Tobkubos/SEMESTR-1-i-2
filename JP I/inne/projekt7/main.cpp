#include <iostream>

using namespace std;


int main()
{

        cout << "Zostanie sprawdzone, czy liczba nalezy do zdefiniowanego zakresu"<< endl;
        cout << "(liczba) : (status przynaleznosci)"<< endl;


int x=0;

while(x<=20){
    if ( ((x>3&&x<11) || (x>15&&x<17)) &&(x!=5))
    {if (x<10){
        cout<<" "<< x<< ": TAK"<<endl;
    else{
        cout<< x<< ": TAK"<<endl;
    }
    }
    if (x>10){
    else{
        cout<< x<< ": NIE"<<endl;
        }
        x=x+1;
    }
    }
}
}


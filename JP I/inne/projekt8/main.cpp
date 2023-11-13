#include <iostream>

using namespace std;


int main()
{

        cout << "Zostanie sprawdzone, czy liczba nalezy do zdefiniowanego zakresu"<< endl;


for(int i=0; i<=20; i++){

    if (((i>3 && i<11) || (i>15 && i<17)) &&(i!=5)){
            if(i<10){

        cout<<" "<< i<< ": TAK"<<endl;
            }
            else{
                cout<< i <<" : TAK"<< endl;
            }

    else{
            if (i<10){
        cout<<" "<< i<< ": NIE"<<endl;
        }
        else{
            cout<< i << " : NIE" <<endl;
        }
    }
    }
    return 0;
    }

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

//liczby od 100 do 0.
 float x = 100;

    while(x>0){
    cout<<"liczba "<< x<<endl;
    x--;
    }


//liczby od 0 do 100.
float y = 0;

    while(y<100){
    cout<<"liczbaaa "<< y<<endl;
    y++;
    }


    float z = ++y;

    while(z<200){
    cout<<"liczbbbb "<< z<<endl;
    ++z;
    }
system("pause");
    return 0;
}


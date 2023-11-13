#include <iostream>

using namespace std;


int main()
{
    int x=3;

    if ( ( (x>2)&&(x<=6) ) || (x==9) ){

        cout << "Liczba nalezy do przedzialu"<< endl;
    }
     else {
        cout<< "Liczba nie nalezy do przedzialu"<<endl;
        }
    return 0;
}


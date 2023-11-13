#include <iostream>

using namespace std;

int main()
{

    int i;

    cout << "Podaj liczbe od 1 do 3"<< endl;
    cin>>i;
    cout<<endl;

    switch(i){
        case 1:
        cout<<"JEDEN";
        break;

        case 2:
        cout<<"DWA";
        break;

        case 3:
        cout<<"TRZY";
        break;
    }

    return 0;
}

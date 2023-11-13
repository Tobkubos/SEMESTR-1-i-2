#include <iostream>

using namespace std;

int main(){

 int i=0;
 do{
    cout<<"Zgadnij Liczbe: ";
    cin>>i;
        if(i<50)
        cout<<"za malo"<<endl;
        if(i>50)
        cout<<"za duzo"<<endl;

 }
 while(i!=50);
cout<<"TO JEST TA LICZBA"<<endl;
return 0;

}


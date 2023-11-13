#include <iostream>

using namespace std;

int main(){

 int i=0;
 int liczba=50;
 cout<<"Zgadnij Liczbe: ";
 cin>>i;

while(i!=liczba){
        if(i<liczba)
        cout<<"za malo"<<endl;
        else
        cout<<"za duzo"<<endl;

        cout<<"Zgadnij Liczbe ponownie ";
        cin>>i;

}
cout<<"ZGADLES!"<<endl;

return 0;

}

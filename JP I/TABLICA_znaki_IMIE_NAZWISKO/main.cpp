#include <iostream>

using namespace std;

void dispTab(int, char[]);

int main()
{
        char tab_1[20]={3,3,3,3,3,3,3,3,3,3,3,3,3,3};
         dispTab(20,tab_1);

    cout<<"Podaj imie i nazwisko...";

    cin.getline(tab_1,20);

    dispTab(20,tab_1);
    cout<<endl<<tab_1;
    return 0;
}

void dispTab(int i, char tab[]){

    for(int j=0; j<i; j++)
            cout<<tab[j];
}

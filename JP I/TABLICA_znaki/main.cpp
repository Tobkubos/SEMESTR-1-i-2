#include <iostream>

using namespace std;

void dispTab(int, char[]);

int main()
{
    char tab_1[10]={"uni"};
    char tab_2[]={"uni"};
    char tab_3[]={'u', 'n', 'i'};
    char tab_4[10]={'u', 'n', 'i'};


    cout<<"rozmiar: "<<sizeof(tab_1)<<endl<<endl;
    dispTab(10, tab_1);
    cout<<"rozmiar: "<<sizeof(tab_2)<<endl<<endl;
    dispTab(10, tab_2);
    cout<<"rozmiar: "<<sizeof(tab_3)<<endl<<endl;
    dispTab(10, tab_3);
    cout<<"rozmiar: "<<sizeof(tab_4)<<endl<<endl;
    dispTab(10, tab_4);

    return 0;
}
void dispTab(int i, char tab[]){

    for(int j=0; j<i; j++){
            cout<<"[ "<<j<<" ] "<<tab[j];

            int x=tab[j];
            cout<<"      | "<<x<<endl;

            /*
            cout<<(int)tab[j];
            */

    }
    cout<<endl;
}

#include <iostream>


using namespace std;

// ala ma kota ---> PIN:1234 ---> 2137@420


    int main()
{

    string tab_zdanie;
    string PIN;
    int program;

cin>>program;
cin.clear();
cin.sync();


    cout<<"Wprowadz znaki... "<<endl;
    getline(cin, tab_zdanie);

                for(int i=0; i<tab_zdanie.size(); i++)
                cout<<"[ "<<i+1<<" ] "<<tab_zdanie[i]<<endl;
//----------------------------------------
                cout<<endl<<endl<<endl;
//----------------------------------------

    cout<<"Wprowadz PIN szyfrujacy... "<<endl;
    getline(cin, PIN);


    switch(program){

    case 1:{
          int o=0;

                for(int i=0; i<tab_zdanie.size(); i++){

                       char y;
                       y = tab_zdanie[i]+(PIN[o]-'0');

                cout<<"[ "<<i+1<<" ] "<<y<<endl;
                o++;
                if(o==PIN.size())
                o=0;
                }
    break;}


    case 2:{
          int o=0;

                for(int i=0; i<tab_zdanie.size(); i++){

                       char y;
                       y = tab_zdanie[i]-(PIN[o]-'0');

                cout<<"[ "<<i+1<<" ] "<<y<<endl;
                o++;
                if(o==PIN.size())
                o=0;
                }
    break;}

    }
return 0;

}

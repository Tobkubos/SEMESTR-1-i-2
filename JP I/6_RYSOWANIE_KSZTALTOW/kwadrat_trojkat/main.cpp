#include <iostream>

using namespace std;



int main(){

string a = "#";


//KWADRAT
for(int x=0; x<10; x++){
    for(int y=0; y<10; y++){

    cout<< a;

    }
    cout<<endl;
}
cout<<endl<<endl<<endl;


//KWADRAT PRZEKATNA
for(int x=0; x<10; x++){
    for(int y=0; y<10; y++){
    if(x==y)

    cout<< " ";

    else
    cout<<a;

    }
    cout<<endl;
}
cout<<endl<<endl<<endl;


//KWADRAT X
for(int x=0; x<10; x++){
    for(int y=0; y<10; y++){
    if(x==y || x==9-y)

    cout<< " ";

    else
    cout<<a;

    }
    cout<<endl;
}
cout<<endl<<endl<<endl;


//KWADRAT X z ramka
for(int x=0; x<10; x++){
    for(int y=0; y<10; y++){
    if((x==y || x==9-y) && (x!=0 && x!=9))

    cout<< " ";

    else
    cout<<a;

    }
    cout<<endl;
}

cout<<endl<<endl<<endl;


//X z ramka
for(int x=0; x<10; x++){
    for(int y=0; y<10; y++){
    if(((x==y || x==9-y)) || x==0 || x==9 || y==0 || y==9)


    cout<< a;

    else
    cout<<" ";

    }
    cout<<endl;

}

for(int x=0; x<10; x++){
    for(int y=0; y<10; y++){
    if(x<9-y)


    cout<< a;

    else
    cout<<" ";

    }
    cout<<endl;
}
}


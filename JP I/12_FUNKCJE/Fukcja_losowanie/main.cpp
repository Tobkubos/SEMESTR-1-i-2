#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int LOSUJ(int a, int b);

    int a=1;
    int b=100;
    int i=0;
    int l;
    int x=0;

int LOSUJ(int a, int b){
    l=rand()%(b-a+1)+a;
    return l;
}


int main()
{
    srand(time(NULL));

    for(int i=0; i<30; i++){
        x=LOSUJ(a, b);
        cout<<x<<endl;
    }
}




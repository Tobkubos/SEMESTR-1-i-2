#include <iostream>

using namespace std;

void odlicz(int);

int main()
{
    odlicz(10);
    return 0;
}

void odlicz (int num){

cout<<num<<endl;
if(num==0)
    return;
odlicz(num-1);
return;
}

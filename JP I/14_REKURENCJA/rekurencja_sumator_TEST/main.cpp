#include <iostream>

using namespace std;

int odlicz(int);


int main()
{
    cout<<odlicz(10)<<endl;
    return 0;
}

int odlicz (int num){
    if(num==0)
    return 0;

    return num+odlicz(num-1);

}

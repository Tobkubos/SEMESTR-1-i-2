#include<iostream>

using namespace std;

int main()
{
float r;
cin>> r;
float d;

    for (int x =-r; x<=r; x++){ // poziom
        for (int y=-r; y<=r; y++){ // pion

        d = ((x*2/r)*(x*2/r) + (y/r)*(y/r)); //punkty

        if (d >0.91 && d<1.09){ //granica bledu
        cout << "#";
        }
        else if(d <0.91){
        cout << "+";
        }
        else{
        cout<<" ";
        }
        }
        cout << endl;
        }
return 0;
}

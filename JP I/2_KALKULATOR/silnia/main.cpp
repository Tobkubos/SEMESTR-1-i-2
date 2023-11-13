#include<iostream>
#include <iomanip>
using namespace std;

main()
{
    int x;
    cin>>x;
    long double y=1;
    for(int i=x; i>0; i--)
        y=y*i;

    cout<<setprecision(10000000);
    cout<<y;




}





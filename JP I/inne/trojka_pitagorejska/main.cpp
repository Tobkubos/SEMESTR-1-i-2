#include <iostream>

using namespace std;
int a, b, c, d;
int main()
{
    cin>>a>>b>>c;

    if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
    cout << "To trojka Pitagorejska" << endl;
    else
    cout << "To nie jest trojka Pitagorejska" << endl;
    return 0;
}

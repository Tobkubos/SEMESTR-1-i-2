#include <iostream>

using namespace std;

void wyswietl(int a, int b);
void zamien(int &a, int &b);

int main()
{
    int a=1;
    int b=2;

wyswietl(a, b);
zamien(a, b);
wyswietl(a, b);

return 0;
}

void wyswietl(int a, int b)
{
cout<<endl<<a<<endl<<b<<endl;

return;
}

void zamien(int &a, int &b)
{
swap(a,b);
return;
}



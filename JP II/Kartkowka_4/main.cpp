#include <iostream>

using namespace std;

class A;
class B;
class C;
class D;

class A{
    private:
    int i;

    public:
friend B;
};

class B{
    private:
    A obj;
    public:
    friend D;
    void Setter(){
    obj.i = 5;
    }
};

class C{
    private:
    A obj;
    public:
    void Setter(){
    obj.i = 5;
    }
};

class D{
    private:
    A obj;
    public:
    void Setter(){
    obj.i = 5;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

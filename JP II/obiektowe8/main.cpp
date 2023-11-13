#include <iostream>

using namespace std;

class Base {
private:
    int x;

protected:
    int y;

public:
    int z;

    int GetX(){
        return x;
    }
    int GetY(){
        return y;
    }
    void SetX(int x_in){
    x = x_in;
    }
    void SetY(int y_in){
    y = y_in;
    }
    void SetZ(int z_in){
    z = z_in;
    }

    void Show()
    {
    cout<<"x="<<x<<", y="<<y<<", z="<<z<<endl;
    }
};

class A : public Base {};

class B : protected Base {
public:
    void SetX(int x_in){
        Base::SetX(x_in);
    }
    void SetY(int y_in){
        Base::SetY(y_in);
    }
    void SetZ(int z_in){
        Base::SetZ(z_in);
    }
    void Show(){
        Base::Show();
    }
};

class C : private Base {
public:
    void SetX(int x_in){
        Base::SetX(x_in);
    }
    void SetY(int y_in){
        Base::SetY(y_in);
    }
    void SetZ(int z_in){
        Base::SetZ(z_in);
    }
    void Show(){
        Base::Show();
    }
};

int main() {
Base *ObjBase = new Base;
A *ObjA = new A;
B ObjB;
C ObjC;

ObjBase->SetX(0);
ObjBase->SetY(0);
ObjBase->z=0;
ObjBase->Show();

ObjA->SetX(1);
ObjA->SetY(1);
ObjA->z=1;
ObjA->Show();

ObjB.SetX(2);
ObjB.SetY(2);
ObjB.SetZ(2);
ObjB.Show();

ObjC.SetX(3);
ObjC.SetY(3);
ObjC.SetZ(3);
ObjC.Show();


    return 0;
}

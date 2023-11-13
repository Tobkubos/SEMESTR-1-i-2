#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cmath>

using namespace std;

class Vector
{
    private:

        int nval;
        double *val;

    public:

        Vector(int nval_in){ //stworzenie Vectora
            nval=nval_in;
            val = new double[nval];
        }

        ~Vector(){ //usuwa
            nval = 0;
            delete[] val;
        }

        void Show(); //pokazuje
        void Write(char *file_out);
        void ReadIn(char *file_in);

        bool Set(int idx, double val_in){ //ustawia wartosc
             if(idx>=0 && idx<nval){
                val[idx]=val_in;
                return 1;
             }
            return 0;
        }

        double Get(int idx){ //pozyskuje wartosc
            return val[idx];
        }
};

void Vector::Show(){
    cout<<"( ";
    for(int i=0; i<nval; i++)
    {
    cout<<val[i];
        if(i!=nval-1)
        {
        cout<<", ";
        }
    }
    cout<<")"<<endl;
}
void Vector::Write(char *file_out){

    ofstream file(file_out);
    file<<nval<<endl;
    for(int i=0; i<nval; i++)
        {
        file<<val[i]<<" ";
        }
    file<<endl;
    file.close();
}

void Vector::ReadIn(char *file_in){

    if(val){
        delete[] val;

    ifstream file(file_in);
    file>>nval;
    val = new double[nval];
    for(int i=0; i<nval; i++)
    {
        file>>val[i];
    }
     file.close();
}
}

//zalokowany wskaznik ma wartosc niezerowa
//niezalokowany wskazuje na 0;


int main()
{
    Vector w1(5);
    for(int i=0; i<5; i++)
        w1.Set(i, 2.*i*i+2*i+4.);

    w1.Show();

    Vector *w2;
    w2 = new Vector(3);
    for(int i=0; i<3; i++)
        w2->Set(i, 3*sin(i)+5*i);

    w2->Show();

    w1.Write("w1.txt");
    w2->ReadIn("w1.txt");
    w2->Show();



    return 0;
}


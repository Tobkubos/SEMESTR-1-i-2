#include <iostream>
#include <fstream>
#include <stdio.h>

// symfonia c++

using namespace std;

struct Vector
{
    int nval;
    double *val;
};

void Create(Vector *vec_in, int nval_in)
{
    vec_in -> nval = nval_in;
    vec_in -> val = new double[nval_in];
}

void Destroy(Vector *vec_in)
{
    vec_in -> nval = 0;
    delete[] vec_in -> val;
}

void Show(Vector *vec_in)
{
    cout<<"( ";
    for(int i=0; i<vec_in -> nval; i++)
    {
    cout<<vec_in -> val[i];
        if(i!=vec_in -> nval-1)
        {
        cout<<", ";
        }
    }
cout<<")"<<endl;
}

void Write1(Vector *vec_in, char *file_out)
{
    ofstream file(file_out);
    file<<vec_in -> nval<<endl;
    for(int i=0; i<vec_in->nval; i++)
        {
        file<<vec_in -> val[i]<<" ";
        }
    file<<endl;
    file.close();
}

Vector *ReadIn1(char *file_in)
{
    ifstream file(file_in);
    int n;
    file>>n;
    Vector *temp = new Vector;
    Create(temp, n);
    for(int i=0; i<n; i++)
    {
        file>>temp -> val[i];
    }
    return temp;
    file.close();
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

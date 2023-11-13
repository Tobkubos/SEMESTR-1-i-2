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
    vec_in->nval = nval_in;
    vec_in->val = new double[nval_in];
}

void Destroy(Vector *vec_in)
{
    vec_in->nval = 0;
    delete[] vec_in->val;
}

void Show(Vector *vec_in)
{
    cout<<"( ";
    for(int i=0; i<vec_in->nval; i++)
    {
    cout<<vec_in->val[i];
        if(i!=vec_in->nval-1)
        {
        cout<<", ";
        }
    }
cout<<")"<<endl;
}

void Write1(Vector *vec_in, const char *file_out)
{
    ofstream file(file_out);
    file<<vec_in->nval<<endl;
    for(int i=0; i<vec_in->nval; i++)
        {
        file<<vec_in->val[i]<<" ";
        }
    file<<endl;
    file.close();
}

Vector *ReadIn1(const char *file_in)
{
    ifstream file(file_in);
    int n;
    file>>n;
    Vector *temp = new Vector;
    Create(temp, n);
    for(int i=0; i<n; i++)
    {
        file>>temp->val[i];
    }
     file.close();
    return temp;
}
// ZAPIS W C
void Write2(Vector *vec_in, const char *file_out)
{
    FILE *file = fopen(file_out, "w");
    fprintf(file, "%i\n", vec_in->nval);
        for(int i=0; i<vec_in->nval; i++)
        {
            if(i<vec_in->nval)
            fprintf(file, "%f ", vec_in->val[i]);

            else
            fprintf(file, "f\n", vec_in->val[i]);
        }
    fclose(file);
}

Vector *ReadIn2(const char *file_in)
{
    int nval_in;
    FILE *file = fopen(file_in, "r");
    fscanf(file, "%i\n", &nval_in);
    Vector *temp = new Vector;
    Create(temp, nval_in);

    for(int i=0; i<nval_in; i++)
    {
        fscanf(file, "%lf", &(temp->val[i]) );
    }
    fclose(file);
    return temp;
}


int main(int argc, char **argv)
{
    const char *plik1=argv[1];
    const char *plik2=argv[2];
    Vector v1;
    Vector v2;
    const int n1=5;
    const int n2=10;

    Create(&v1, n1);
    Create(&v2, n2);
    for(int i=0; i<n1; i++)
    v1.val[i] = 2.*i+1.;

    for(int i=0; i<n2; i++)
    v2.val[i] = 2.*i*i+3.*i+50.;

    Show(&v1);
    Show(&v2);

    Write1(&v1, plik1);
    Write2(&v2, plik2);

//const char *name_out1 = "vector.txt";
    Destroy(&v1);
    Destroy(&v2);

    Show(&v1);
    Show(&v2);


    Vector *w1;
    Vector *w2;

    w1 = ReadIn1(plik1);
    w2 = ReadIn2(plik2);

    Show(w1);
    Show(w2);

    Destroy(w1);
    Destroy(w2);

    Show(w1);
    Show(w2);

    return 0;
}

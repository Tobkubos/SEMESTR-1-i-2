#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

int *RandomTable(int);
void Swap(int*, int, int);
int Interpolation(int*, int, int, int);
int InterSearch(int*, int, int);
void TestInterSearch();
void QuickSort(int*, int, int);
int LosujIndex(int);
long double InterSearchStatistics(int, int);

int main()
{
    srand(time(NULL));
    TestInterSearch();
    return 0;
}

int Interpolation(int *tab, int left, int right, int s)
{
    int a = ((s - tab[left]) * (right - left));
    int b = tab[right] - tab[left];
    int Icalc = left + (a / b);
    return Icalc;
}

int InterSearch(int *tab, int length, int s)
{
    int left = 0;
    int right = length - 1;
    int mid = 0;
    int porownania = 0;

    while (left <= right)
    {
        mid = Interpolation(tab, left, right, s);
        if (tab[mid] == s)
        {
            porownania++;
            return porownania;
        }

        if (tab[mid] < s)
        {
            porownania++;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return porownania;
}

void TestInterSearch()
{
    ofstream file("InterSearch.dat", ios::app);
    for (int length = 10; length < 10001; length += 10)
    {
        long double srednia = InterSearchStatistics(length, 100);
        cout << length << " " << srednia << endl;
        file << length << " " << srednia << endl;
    }
    file.close();
}

long double InterSearchStatistics(int length, int maximum)
{
    int porownanie = 0;
    double suma = 0;
    long double srednia = 0;
    for (int i = 0; i < maximum; i++)
    {
        int *tab = RandomTable(length);
        QuickSort(tab, 0, length - 1);
        int s = LosujIndex(length);
        porownanie = InterSearch(tab, length, tab[s]);
        suma = suma + porownanie;
        delete[] tab;
    }
    srednia = suma / maximum;
    return srednia;
}

void QuickSort(int *tab, int left, int right)
{
    if (left < right)
    {
        int pos = left;
        int i = left + 1;

        while (i <= right)
        {
            if (tab[i] < tab[left])
            {
                pos = pos + 1;
                Swap(tab, pos, i);
                i += 1;
            }
            else
            {
                i += 1;
            }
        }

        if (i > right)
        {
            Swap(tab, pos, left);
            QuickSort(tab, left, pos - 1);
            QuickSort(tab, pos + 1, right);
        }
    }
}

int *RandomTable(int length)
{
    int *tab = new int[length];
    for (int i = 0; i < length; i++)
    {
        tab[i] = rand() % (1001);
    }

    return tab;
}

void Swap(int *tab, int i, int j)
{
    int temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

int LosujIndex(int length)
{
    int r;
    do
    {
        r = rand();
    } while (r > length - 1);

    return r;
}

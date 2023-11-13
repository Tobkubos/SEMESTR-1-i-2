#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class Person{

private:
    char *Name;
    char *Surname;
    long long PESEL;

public:
    void Setname(const char *NameIn){
         if(Name) delete[] Name;

         int n = strlen(NameIn);
         Name = new char[n+1];
         strcpy(Name, NameIn);
    }

    void Setsurname(const char *SurnameIn){
         if(Surname) delete[] Surname;

         int n = strlen(SurnameIn);
         Surname = new char[n+1];
         strcpy(Surname, SurnameIn);
    }

    void SetPESEL(const long long PESELIn){
         PESEL = PESELIn;
    }

    Person(){
        Name=0;      Setname("");
        Surname=0;   Setsurname("");
        PESEL=0LL;
    }

    Person(const char *NameIn, const char *SurnameIn, const long long PESELIn){
        Name=0;    Setname(NameIn);
        Surname=0; Setsurname(SurnameIn);
        PESEL=0LL; PESEL=PESELIn;
    }

    ~Person(){
        delete[] Name;
        delete[] Surname;
        PESEL = 0LL;
    }

    int GetYear(){
        int Year = ((PESEL/1000000000LL)+1900);
        int Century = (PESEL/10000000LL%100)/20;

        if(Century==4)
            Year-=100;
        if(Century<=3)
            Year+=100*Century;
        return Year;
    }

    int GetMonth(){
        int Month=((PESEL/10000000LL)%100)%20;
        return Month;
    }
// dzielenie obcina ze strony prawej
// modulo obcina ze strony lewej
    int GetDay(){
        int Day = ((PESEL/100000LL)%100);
        return Day;
    }


    bool IsMale(){
        int tmp = ((PESEL/10)%10);
        return(tmp%2);
    }

    static int GetControlValue(long long PESELIn);

    bool IsCorrect(){
        if(GetControlValue(PESEL)==(PESEL%10))
            return 1;

            return 0;
    }

    void ShowALL();
};

int Person::GetControlValue(long long PESELIn){

    int sum = 0;
    PESELIn /= 10;
        sum = 3*(PESELIn%10); PESELIn/=10;
        sum+= 1*(PESELIn%10); PESELIn/=10;

    for(int i=0; i<=1; i++)
    {
        sum+= 9*(PESELIn%10); PESELIn/=10;
        sum+= 7*(PESELIn%10); PESELIn/=10;
        sum+= 3*(PESELIn%10); PESELIn/=10;
        sum+= 1*(PESELIn%10); PESELIn/=10;
    }
return (10-sum%10)%10;
}

void Person::ShowALL(){
    cout<<"Name & Surname: "<<Name<<" "<<Surname<<endl;
    cout<<"PESEL: "<<PESEL<<" "<<(IsCorrect()?"valid":"invalid")<<endl;
    cout<<"Gender: "<<(IsMale()?"Male":"Female")<<endl;
    cout<<"Date of Birth: "<<GetDay()<<". "<<GetMonth()<<". "<<GetYear()<<endl;
}


int main()
{
cout<<"Number of bits in int: "<<8*sizeof(int)-1<<endl;
cout<<"Number of bits in long: "<<8*sizeof(long)-1<<endl;
cout<<"Number of bits in long long: "<<8*sizeof(long long)-1<<endl;

cout<<"Number of bits needed: "<<log(1.e11-1)/log10(2)<<endl<<endl<<endl;

Person os1 = Person("Jan", "Kowalski", 44051401359);
os1.ShowALL();
Person *os2 = new Person();

char tab[256];

cout<<"Name "<<endl;
cin>>tab;
os2->Setname(tab);

cout<<"Surname "<<endl;
cin>>tab;
os2->Setsurname(tab);

long long PeselTemp;
cout<<"PESEL "<<endl;
cin>>PeselTemp;
os2->SetPESEL(PeselTemp);
os2->ShowALL();

    return 0;
}

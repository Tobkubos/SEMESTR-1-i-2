#include <iostream>

using namespace std;

class Animal{

    private:
        int nlegs;

    protected:
        float age;
        string name;

    public:
        float weight;

    Setlegs(int nlegs_in){
        nlegs = nlegs_in;
    }

    Animal(string name_in){
    nlegs = 0;
    age = 0;
    weight = 0;
    name = name_in;
    cout<<" New Animal "<<name_in<<" created "<<endl;
    }
    virtual ~Animal(){
        cout<<"The animal was destroyed"<<endl;
    }

    virtual void Describe(){
    cout<<"ZWIERZE "<<name<<endl;
    cout<<"ILE NOG "<<nlegs<<endl;
    cout<<"WAGA "<<weight<<endl;
    cout<<"WIEK "<<age<<endl;
    }

    void Sleep(){
    cout<<"The animal is sleeping now"<<endl;
    }
};

class Cat : public Animal{
public:
    string coloration;

    ~Cat(){
    cout<<"The cat was destroyed"<<endl;
    }

    Cat(string name_in):Animal(name_in){
        Setlegs(4);
        coloration="unspecified";
        cout<<" new Cat created "<<endl;
    }

    void Purr(){
    cout<<"MMMRRRRrrrrrrruuuuuuu"<<endl;
    }

    void Describe(){
        Animal::Describe();
        cout<<"COLORATION "<<coloration<<endl;
    }
};

class Bird : public Animal{
public:

    void Fly(){
    cout<<"The bird is flying now"<<endl;
    }

    Bird(string name_in):Animal(name_in){
        Setlegs(2);
        cout<<" new Bird was created "<<endl;
    }

    ~Bird(){
    cout<<"Bird was destroyed"<<endl;
    }
};

    void Eat(Animal *who, Animal *whom){

        who->Describe();
        cout<<"is eating "<<endl;
        whom->Describe();
        who->weight+=(whom->weight);
        delete whom;
    }


int main()
{
    Animal *Krowa = new Animal(" Krowa");
    Krowa->weight=1000;
    Krowa->Describe();
    Krowa->Sleep();
    delete Krowa;

    cout<<endl<<endl<<endl;

    Cat *Kot = new Cat(" Rubin");
    Kot->weight=3.5f;
    Kot->coloration="orange";
    Kot->Describe();
    Kot->Sleep();
    Kot->Purr();

    cout<<endl<<endl<<endl;


    Bird *Papuga = new Bird(" Ambrozy");
    Papuga->weight=2.0f;
    Papuga->Fly();
    Papuga->Describe();

    cout<<endl<<endl<<endl;

    cout<<"JEDZENIE"<<endl;
    Eat(Kot, Papuga);
    Kot->Describe();
    delete Kot;

    return 0;
}

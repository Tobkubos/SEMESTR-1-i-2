#include <iostream>
#include <fstream>

using namespace std;

class Stuff{
private:
    string stname;
    float price;

public:
    Stuff(string stname_in = "unspecified", float price_in = 0)
    :stname(stname_in),price(price_in){}

    void SetName(string stname_in){
        stname = stname_in;
    }

    void SetPrice(float price_in){
        price = price_in;
    }

    string GetName(){
        return stname;
    }

    float GetPrice(){
        return price;
    }

    Stuff& operator+=(float val_add){
        price+=val_add;
        return *this;
    }

    friend ostream& operator<<(ostream& out, Stuff& stuff_in);

    bool operator>(Stuff& stuff_in){
        return (this->price>stuff_in.price);
    }
};


    ostream& operator<<(ostream& out, Stuff& stuff_in){
        out<<"nazwa: "<<stuff_in.stname<<"  |  cena: "<<stuff_in.price;
    }

    Stuff& operator-=(Stuff& stuff_in, float subt){
        stuff_in.SetPrice(stuff_in.GetPrice()-subt);
        return stuff_in;
    }

    bool operator<(Stuff& stuff_in1, Stuff& stuff_in2){
        return (stuff_in1.GetPrice() < stuff_in2.GetPrice());
    }

    void Store(){
        int nprod;

        cout<<"The Number of Products ";
        cin>>nprod;
        Stuff *products = new Stuff[nprod];

        for(int i=0; i<nprod; i++){
            string stname;
            float price;
            cout<<"Product "<<i+1<<" ";
            cin>>stname;
            cout<<"Price of product "<<i+1<<" ";
            cin>>price;
            products[i].SetName(stname);
            products[i].SetPrice(price);
        }
        cout<<"BIEDRONKHA"<<endl;
        for(int i=0; i<nprod; i++){
            cout<<i+1<<": "<<products[i]<<endl;
            cout<<endl<<"~-~-~-~-~-~-~"<<endl<<endl;
        }

        ofstream file("Store.txt");
        for(int i=0; i<nprod; i++){
            file<<i+1<<": "<<products[i]<<endl;
        }
        file.close();
    }


int main()
{
    Stuff potato("ziemnior", 2.5);
    cout<<"BASE PRICE: "<<potato.GetPrice()<<endl;
    potato+=0.5;
    cout<<"NEW PRICE: "<<potato.GetPrice()<<endl;
    potato-=1.0;
    cout<<"NEW NEW PRICE: "<<potato.GetPrice()<<endl;

    Stuff tomato("pomidoras", 5.2);

    cout<<"Potato is ";
    if(potato>tomato)
        cout<<"more expensive than potato";
    if(potato<tomato)
        cout<<"cheaper";

    Store();
    return 0;
}

//using this pointer
//Tuhina sarkar
#include<iostream>
#include<string>
using namespace std;
class Car{
    private:
    string model,name;
    int year,no_seats,price;
    public:
    Car(string model,string name,int year,int no_seats,int price){
        this->model=model;
        this->name=name;
        this->year=year;
        this->no_seats=no_seats;
        this->price=price;
    }
    void display(){
        cout<<"NAME: "<<name;
        cout<<"MODEL: "<<model;
        cout<<"YEAR OF MANUFACTURE: "<<year;
        cout<<"NO OF SEATS: "<<no_seats;
        cout<<"PRICE: "<<price;
    }
};
int main(){
    int y,p,n;
    string m,na;
    cout<<"Enter name of the car: ";
    getline(cin,na);
    cout<<"Enter model: ";
    getline(cin,m);
    cout<<"Enter price: ";
    cin>>p;
    cout<<"Enter no. of seats: ";
    cin>>n;
    cout<<"Enter year of manufacture: ";
    cin>>y;
    Car obj(m,na,y,n,p);
    obj.display();
}
//program with 2 classes and a common friend function
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Truck;
class Car{
    private:
    int person;
    public:
    Car(int p){
        person=p;
    }
    friend void carry(Car C,Truck T);
};
class Truck{
    private:
    int load;
    public:
    Truck(int l){
        load=l;
    }
    friend void carry(Car C,Truck T);
};
void carry(Car C,Truck T){
    cout<<"Truck carries load "<<T.load<<" kg"<<endl;
    cout<<"Car carries persons "<<C.person<<endl;
}
int main(){
    int p,l;
    cout<<"Enter no. of persons that a  car can hold: ";
    cin>>p;
    cout<<"Enter amount of load in kg that a truck can carry: ";
    cin>>l;
    Car C(p);
    Truck T(l);
    carry(C,T);
}
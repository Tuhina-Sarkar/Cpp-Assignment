//hybrid inheritance
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a vehicle\n";
    }
    void starts(){
        cout<<"Vehicle Starts.\n";
    }
    void stops(){
        cout<<"Vehicle stops.\n";
    }
};
class Car:public Vehicle{
    public:
    Car(){
        cout<<"This Vehicle is a car\n";
    }
};
class Mercedes:public Car{
     public:
     Mercedes(){
        cout<<"This is a Mercedes Car.\n";
     }
};
class Swift:public Car{
    public:
        Swift(){
            cout<<"This is a Swift car.\n";
        }
};
int main(){
    Mercedes M;
    Swift S;
    M.starts();
    S.stops();
}
//destructor order in inheritance
//in multilevel inheritance
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Human{
    public:
    ~Human(){
        cout<<"1.Destructor of the base class human.";
    }
    
};
class Parent:public Human{
    public:
    ~Parent(){
        cout<<"2.Destructor of(parent class) child class to human "<<endl;
    }

};
class Child:public Parent{
    public:
    ~Child(){
        cout<<"3.Destructor of child class (derived from human class)"<<endl;
    }

};
int main(){
    cout<<"ORDER OF DESTRUCTORS IN MULTILEVEL INHERITANCE: "<<endl;
    cout<<endl;
    Child C1;
}
//Runtime polymorphism
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    virtual void show(){
        cout<<"This a function of base class";
    }
};
class Derived:public Base{
    public:
    void show(){
        cout<<"This is a function of derived class";
    }
};
int main(){
    Base *b;
    Derived d;
    b=&d;
    b->show();
}
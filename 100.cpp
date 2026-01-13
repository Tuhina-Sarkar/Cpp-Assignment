//program with pure virtual functions and abstract class
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    virtual void sound()=0;            //(pure virtual function)
};
class Dog:public Animal{
    public:
    void sound(){
        cout<<" Dog Barks"<<endl;
    }
};
class Cat:public Animal{
    public:
    void sound(){
        cout<<" Cat Meows"<<endl;
    }
};
int main(){
    Animal *a;
    Dog D;
    Cat C;
    a=&D;
    a->sound();
    a=&C;
    a->sound();
}
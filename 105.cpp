//Program with pointer to base class calling derived function
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    virtual  void sound(){
        cout<<"Makes sounds.";
    }
};
class Goat:public Animal{
    public:
    void sound(){
        cout<<"Bleats";
    }
};
int main(){
    Animal *A;
    Goat G;
    A=&G;
    A->sound();
}
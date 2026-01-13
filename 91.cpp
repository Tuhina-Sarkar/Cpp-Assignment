//program to show order of constructors in inheritance
//Heriarchical Inheritance
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Animal{
    protected:
    string species;
    int weight;
    int age;
    bool isDomestic;
    public:
    Animal(string s,int w,int a,bool d){
        species=s;
        weight=w;
        age=a;
        isDomestic=d;
        cout<<"Base class Constructor runs(1)"<<endl;
    }
    void Check(){
        if (isDomestic==1){
            cout<<species<<" Is domestic "<<endl;
        }
        else{
            cout<<species<<" is not domestic "<<endl;
        }
    }
    void eats(){
        cout<<"It eats. "<<endl;
    }
};
class Dog:public Animal{
    protected:
    string breed;
    bool IsGuard;
    public:
    Dog(string b,bool g):Animal("Dog",5,4,1){
        breed=b;
        IsGuard=g;
        cout<<"Derived class1 constructor(2)"<<endl;
    }
    void barks(){
        cout<<species<<"Barks. "<<endl;
    }

};
class Cat:public Animal{
    protected:
    string breed;
    string eyecolour;
    string furcolour;
    public:
    Cat(string b,string e,string f):Animal("Cat",3,3,1){
        breed=b;
        eyecolour=e;
        furcolour=f;
        cout<<"Derived class2 constructor runs(3)"<<endl;
    }
    void meows(){
        cout<<species<<" Meows "<<endl;
    }
};
int main(){
    cout<<"Order of Constructor in heriarchical Inheritance: "<<endl;
    Dog D("Pomeranian",0);
    Cat C("Persian","blue","white");

}
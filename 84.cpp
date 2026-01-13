//heirarchical inheritance
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
    }
    void meows(){
        cout<<species<<" Meows "<<endl;
    }
};
int main(){
    Dog D("Pomeranian",0);
    Cat C("Persian","blue","white");
    D.Check();
    C.meows();

}
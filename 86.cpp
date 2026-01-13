//program demonstrating private inheritance
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    void setDetails(string n,int r){
        name=n;
        age=r;
    }
};
class Student:private Person{//private Inheritance
    public:
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    void setInfo(string n,int r){
        setDetails(n,r);
    }


};
int main(){
    Student S;
    S.setInfo("Tuhina Sarkar",19);
    S.display();
}
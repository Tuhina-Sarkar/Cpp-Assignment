//Tuhina Sarkar
//to access base class members using derived class
#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    string address;
    public:
    Person(string n,int a,string add){
        name=n;
        age=a;
        address=add;
    }
    void eats(){
        cout<<" Eats "<<endl;
    }
};
class Student:public Person{
    private:
    int roll;
    int marks;
    public:
    Student(string n,int a,string add,int r,int m):Person(n,a,add){
        roll=r;
        marks=m;
    }
    void display(){
        cout<<"Displaying details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Address: "<<address<<endl;
    }
    void studies(){
        cout<<"This is studies function. "<<endl;
        cout<<name<<" Studies "<<endl;
    }
};
int main(){
    Student S("Tuhina Sarkar",19,"Ghatsila",71,699);
    S.display();
    S.studies();

}
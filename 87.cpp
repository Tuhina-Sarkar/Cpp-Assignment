//protected inheritance
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    string address;
    public:
    void setDetails(string n,int a,string ad){
        name=n;
        age=a;
        address=ad;
    }   
};
class Student:protected Person{
    public:
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
    }
    void setInfo(string n,int a,string add){
        setDetails(n,a,add);
    }
};
int main(){
    Student S;
    S.setInfo("Tuhina Sarkar",19,"Near Circus Maidan,Dahigora,Ghatsila");
    S.display();
}
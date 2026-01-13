//multiple inheritance
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Mother{
    protected:
    string MotherName;
    string bloodgrp;
    public:
    void care(){
        cout<<"cares"<<endl;
    }
};
class Father{
    protected:
    string FatherName;
    string occupation;
    public:
    void earns(){
        cout<<"earns "<<endl;
    }


};
class Child:public Mother,public Father{
    private:
    string name;
    string course;
    int age;
    public:
    void input(){
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter Father's Name: ";
        getline(cin,FatherName);
        cout<<"Enter Mother's Name: ";
        getline(cin,MotherName);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter course: ";
        cin>>course;
        
    }
    void display(){
        cout<<"DISPLAYING DETAILS:";
        cout<<"Name: "<<name<<endl;
        cout<<"Father's Name: "<<FatherName<<endl;
        cout<<"Mother's Name: "<<MotherName<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"course: "<<course<<endl;
    }
    void studies(){
        cout<<"Studies "<<endl;
    }
    };
    int main(){
        Child C;
        C.input();
        C.display();
    }
//Tuhina Sarkar
//program to demonstrate class member functions
#include<iostream>
#include<string>
using namespace std;
class Student{
private:
    string name,id;
    int roll,mark;
public:
    void input(){
        cout<<"Enter name : ";
        getline(cin,name);
        cout<<"Enter student id: ";
        getline(cin,id);
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter marks: ";
        cin>>mark;
    }
    void display(){
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your id is is: "<<id<<endl;
        cout<<"Your roll no. is: "<<roll<<endl;
        cout<<"Your marks is: "<<mark;
    }
    char CALgrade(){
        if(mark>90){
            return 'A';
        }
        else if(mark>75){
        return 'B';
        }
        else {
        return 'C';
        }
    }
};
int main(){
    Student S;
    S.input();
    S.display();
    cout<<endl;
    cout<<"Grade of the student is: "<<S.CALgrade();
}
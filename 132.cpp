//writing objects into a file
//Tuhina Sarkar
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    public:
    void input(){
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter roll: ";
        cin>>roll;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
    }
};
int main(){
    Student S;
    S.input();
   ofstream fwr;
   fwr.open("Student.txt",ios::app);
   fwr<<"Roll No: "<<S.roll<<"\n";
   fwr<<"Name: "<<S.name<<"\n";
   fwr.close();
   cout<<"Data written successfully. ";
}
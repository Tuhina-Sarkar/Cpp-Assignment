//programs to demonstrate friend function to access private members
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int roll,marks;
    public:
    Student(string n,int r,int m ){
        name=n;
        roll=r;
        marks=m;
    }
    friend void display(Student S);
};
void display(Student S){
    cout<<"Name of the student: "<<S.name<<endl;
    cout<<"Roll no of the student: "<<S.roll<<endl;
    cout<<"Marks of the student: "<<S.marks<<endl;
}
int main(){
    string n;
    int r,m;
    cout<<"Enter name: ";
    getline(cin,n);
    cout<<"Enter roll: ";
    cin>>r;
    cout<<"Enter marks: ";
    cin>>m;
    Student S(n,r,m);
    display(S);
}
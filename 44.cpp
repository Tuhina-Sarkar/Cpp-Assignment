//Tuhina Sarkar
//read and display employee details
#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    string name,ID,dep,des;
    int sal; 
    public:
    void input(){
        cout<<"Enter name of the employee: ";
        getline(cin,name);
        cout<<"Enter ID of the employee: ";
        getline(cin,ID);
        cout<<"Enter the department of the student: ";
        getline(cin,dep);
        cout<<"Enter designation of the employee: ";
        getline(cin,des);
        cout<<"Enter the salary of the employee: ";
        cin>>sal;
        cout<<"Data entered successfully!!"<<endl;
    }
    void display(){
        cout<<"EMPLOYEE DETAILS: "<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"Department: "<<dep<<endl;
        cout<<"Designation: "<<des<<endl;
        cout<<"Salary: "<<sal<<endl;
    }
};
int main(){
    Employee E;
    E.input();
    E.display();
}
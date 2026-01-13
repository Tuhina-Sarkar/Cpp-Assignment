//to differentiate local variables and member variables using this
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    string name;
    string empID;
    int age;
    public:
    Employee(string name,string empID,int age){
        this->name=name;
        this->empID=empID;
        this->age=age;
    }
    void display(){
        cout<<"EMPLOYEE DETAILS"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Employee E("Sushmita Sarkar","EU786858",25);
    E.display();
}
//demonstrate constructor overloading
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    string name,department,ID;
    int sal;
    public:
    Employee(){//default constructor 1
        name="Abhishek";
        department="HR";
        sal=40000;
        ID="UH765779";
    }
    Employee(string n,string d,string i,int sa){//Parametrized constructor 2
        name=n;
        department=d;
        sal=sa;
        ID=i;
    }
    Employee(string n,string i){
        name=n;
        department="Tech Team";
        ID=i;
        sal=72000;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Salary: "<<sal<<endl;
    }
};
int main(){
    Employee E1;
    Employee E2("Robin","Management","UH6679693",54000);
    Employee E3("kris","UH542007");
    cout<<"1st Employee: "<<endl;
    E1.display();
    cout<<"2nd Employee: "<<endl;
    E2.display();
    cout<<"3rd Employee: "<<endl;
    E3.display();
}
//dynamically created object using new and delete
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
    string name;
    string department;
    int age;
    int no_classes;
    public:
    Teacher(string n,string d,int a,int no){
        name=n;
        department=d;
        age=a;
        no_classes=no;
    }
    void teaches(){
        cout<<"Teaches "<<endl;
    }
    void display(){
        cout<<"TEACHER INFO: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"No of classes he/she takes per day: "<<no_classes<<endl;
    }
};
int main(){
    Teacher *T=new Teacher("Reshma singh","IT",28,3);
    T->display();
    delete T;
}
//dynamically allocate memory in constructor
//TUHINA SARKAR
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string *name,course,grade;
    int age,roll;
    public:
    Student(){
        name=new string;
        *name="Tuhina Sarkar";//allocation
        course="B.Tech";
        grade="A+";
        age=19;
        roll=71;
    }
    ~Student(){
        delete name;//frees memory
    }
    void display(){
        cout<<"Displaying details: "<<endl;
        cout<<"Name: "<<*name<<endl;
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};
int main(){
    Student S1;
    S1.display();
}

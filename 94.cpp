//program using inheritance for student marks processing
//Single inheritance
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Student{
    protected:
    string name;
    int roll;
    string course;
    string fname;
    int mark1,mark2,mark3,mark4,mark5;
    public:
    Student(string n,int r,string c,int m1,int m2,int m3,int m4,int m5,string f){
        name=n;
        roll=r;
        course=c;
        mark1=m1;
        mark2=m2;
        mark3=m3;
        mark4=m4;
        mark5=m5;
        fname=f;
    }
};
class Result:public Student{
    private:
    float avg;
    public:
    Result(string n,int r,string c,int m1,int m2,int m3,int m4,int m5,string f):Student(n,r,c,m1,m2,m3,m4,m5,f){
    }
    void calResult(){
        avg=(mark1+mark2+mark3+mark4+mark5)/5.0;
    }
    void display(){
        cout<<"\t RESULT \t"<<endl;
        cout<<"____________________________________"<<endl;
        cout<<"NAME: "<<name<<endl;
        cout<<"COURSE: "<<course<<endl;
        cout<<"ROLL: "<<roll<<endl;
        cout<<"FATHER'S NAME: "<<fname<<endl;
        cout<<"TOTAL PERCENTAGE: "<<avg<<"%"<<endl;
    }
};
int main(){
    Result A("Tuhina Sarkar",71,"Btech CSE",98,97,99,95,94,"Kajal Sarkar");
    A.calResult();
    A.display();
}
//Program with static data member
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int roll;
    int marks;
    public:
    static int No_students;
    Student(string n,int r,int m){
        name=n;
        roll=r;
        marks=m;
        No_students++;
    }
    void display(){
        cout<<"Name of the student: "<<name<<endl;
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int Student::No_students=0;
int main(){
    int m,r;
    string n;
    cout<<"Enter your name: ";
    getline(cin,n);
    cout<<"Enter roll no: ";
    cin>>r;
    cout<<"Enter marks: ";
    cin>>m;
    Student S1(n,r,m),S2("Taniya sarkar",75,91),S3("Rohit sharma",87,54);
    S1.display();
    S2.display();
    S3.display();
    cout<<"Total number of students: "<<Student::No_students<<endl;
}

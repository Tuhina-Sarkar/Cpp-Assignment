//Tuhina sarkar
//program to store student details using structure(2 students)
#include<iostream>
#include<string>
using namespace std;
struct Student{
    string name,add;
    int roll;
    int marks;
}s1;
int main(){
    cout<<"Enter details of the student: "<<endl;
    cout<<"Enter name of the student:  "<<endl;
    getline(cin,s1.name);
    cout<<"Enter address of the student: "<<endl;
    getline(cin,s1.add);
    cout<<"Enter roll of the student: "<<endl;
    cin>>s1.roll;
    cout<<"Enter marks of the  student: "<<endl;
    cin>>s1.marks;
    cout<<"Details of the student are: "<<endl;
    //data display
    cout<<"Name of the student is: "<<s1.name<<endl;
    cout<<"Address of the student is: "<<s1.add<<endl;
    cout<<"Roll no. of the student is: "<<s1.roll<<endl;
    cout<<"Marks of the student is: "<<s1.marks<<endl;
    }
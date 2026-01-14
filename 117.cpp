//program using multiple classes using composition
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int roll;
    public:
    Student(string n,int r){
        name=n;
        roll=r;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<roll<<endl;
    }

};
class School{
    private:
    string scname;
    string address;
    string board;
    Student St;
    public:
    School(string n,string a,string b,Student S):St(S){
        scname=n;
        address=a;
        board=b;
    }
    void display(){
        cout<<"Name of the School: "<<scname<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Board: "<<board<<endl;
        cout<<"Student_details:\n ";
        St.show();
    }
};
int main(){
    Student S("Tuhina Sarkar",71);
    School Sc("Irvine Adventist School","Jamshedpur","ICSE",S);
    Sc.display();
}
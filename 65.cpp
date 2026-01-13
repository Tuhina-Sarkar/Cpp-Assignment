//a program with a friend class
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Result;
class Student{
    private:
    string name;
    int m1,m2,m3,m4,m5;
    public:
    void input(){
        cout<<"Enter name of the student: ";
        getline(cin,name);
        cout<<"Enter marks out of 100 for five subjects one by one: ";
        cin>>m1>>m2>>m3>>m4>>m5;
    }
    friend class Result;
};
class Result{
    private:
    int avg;
    public:
    void display(Student S){
        avg=(S.m1+S.m2+S.m3+S.m4+S.m5)/5;
        cout<<"you scored: "<<avg<<"%";
    }
};
int main(){
    Student S;
    S.input();
    Result R;
    R.display(S);
}

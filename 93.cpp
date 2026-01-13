//virtual base class
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Student{                            //Virtual Base Class
    protected:
    int roll;
    public:
    void set_roll(int r){
        roll=r;
    }
    void display(){
        cout<<"Roll no: "<<roll<<endl;
    }
};
class Written_Test:virtual public Student{
    protected:
    int physics,maths;
    public:
    void set_marks(int p,int m){
        physics=p;
        maths=m;
    }
    void display_marks(){
        cout<<"Physics marks: "<<physics<<endl;
        cout<<"Maths marks: "<<maths<<endl;
    }
};
class Practicals:virtual public Student{
    protected:
    int programming;
    public:
    void set_pmarks(int pm){
        programming=pm;
    }
    void display_p(){
        cout<<"Programming marks: "<<programming<<endl;
    }
};
class Result:public Written_Test,public Practicals{
    protected:
    int total;
    public:
    void display_result(){
        total=physics+maths+programming;
        display();
        display_marks();
        display_p();
        cout<<"Total marks: "<<total<<endl;
    }
};
int main(){
    Result Tuhina;
    Tuhina.set_roll(71);
    Tuhina.set_marks(99,98);
    Tuhina.set_pmarks(90);
    Tuhina.display_result();
}
//order of constructor execution
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Student{
   private:
   int slno, roll,marks;
   string name; 
   public:
   Student(){
    cout<<"1st constructor runs"<<endl;
    slno=1;
    roll=1;
    name="Tuhina Sarkar";
    marks=99;
   }
   Student(int r,int m,string n){
    cout<<"2nd constructor runs"<<endl;
    slno=2;
    roll=r;
    marks=m;
    name=n;
   }
   Student(int r,string n){
    cout<<"3rd constructor runs"<<endl;
    slno=3;
    roll=r;
    name=n;
    marks=79;
   }
   void display(){
    cout<<endl;
    cout<<"details of "<<slno<<"student"<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"roll no: "<<roll<<endl;
    cout<<"marks: "<<marks<<endl;
   }
};
int main(){
    int r,m;
    string n;
    cout<<"Enter name: ";
    cin>>n;
    cout<<"Enter roll no: ";
    cin>>r;
    cout<<"Enter marks: ";
    cin>>m;
    Student s1,s2(r,m,n),s3(4,"Susmita");
    cout<<endl;
    s1.display();
    s2.display();
    s3.display();
}
//Program defining user defined exception class
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Invalid{
    public:
    string msg;
    Invalid(string line){
        msg=line;
    }
};
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try{
       if(age<0){
        throw Invalid("Age cannot be negative.");
       }
       else if(age>120){
        throw Invalid("Age is too high.");
       }
       else{
        cout<<"The entered age "<<age<<" is valid.";
       }
    }
    catch(Invalid C){
        cout<<"The exception which arises : "<<C.msg;
    }
}


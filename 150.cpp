//program catching all exceptions using catch(...)
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
    cout<<"Enter Age: ";
    cin>>age;
    try{
        if(age<0){
            throw"Age cannot be negative.";
        }
        else if(age>120){
            throw 0;
        }
        else{
            cout<<"Your age is: "<<age;
        }
    }

    catch(...){
        cout<<"Invalid Age";
    }
}

//program throwing multiple types of exceptions
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
    catch(const char *ch){
        cout<<ch;
    }
    catch(int p){
        cout<<"Age is too high!";
    }
}

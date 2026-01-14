//program throwing an integer exception
//Tuhina Sarkar
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    try{
        if(b==0){
            throw 0;
        }
        else{
            c=a/b;
            cout<<"The result of a/b is: "<<c<<endl;
        }
    }
    catch(int ch){
        cout<<"Cannot be divided by ZERO!!";
    }
}
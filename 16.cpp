//Tuhina Sarkar
//demonstrating the use of increment and decrement operators
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a ";
    cin>>a;
    cout<<"initial value of a "<<a<<endl;
    cout<<"after pre increment of a it becomes "<<++a<<endl;
    cout<<" post increment of a "<<a++<<endl;
    cout<<"value after post decrement of a "<<a<<endl;
    cout<<"after pre decrement of a "<<--a<<endl;
    cout<<"post decrement of a "<<a--<<endl;
    cout<<"value of a after post decrement of a "<<a<<endl;
}
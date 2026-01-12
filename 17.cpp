//Tuhina Sarkar
//demonstrating the use of ternary operator
//displaying greater number from two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number in a: ";
    cin>>a;
    cout<<"enter second number in b: ";
    cin>>b;
    (a>b)?cout<<a<<" is greater ":cout<<b<<" is greater ";
}
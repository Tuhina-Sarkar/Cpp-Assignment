//Tuhina Sarkar
//swapping without using a third variable
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter values of a and b";
    cin>>a>>b;
    cout<<"before swapping the values of a is"<<a<<" and b is"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping the values of a is"<<a<<" and b is"<<b;
}
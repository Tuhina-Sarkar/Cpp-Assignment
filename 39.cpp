//Tuhina Sarkar
//demonstrating pointers and their basic operations
#include<iostream>
using namespace std;
int main(){
    int a,b,*p;
    cout<<"Enter value of a";
    cin>>a;
    p=&a;//storing the adress of a
    cout<<"Adress of a(stored in p)"<<a<<" "<<p<<endl;
    cout<<"value pointed by p: "<<*p<<endl;
    *p=102;
    cout<<"After changing value using pointer: new value "<<a<<endl;
    cout<<"Enter value of b ";
    cin>>b;
    p=&b;
    cout<<"the value pointed by p: "<<*p<<endl;
    cout<<"Adress of b: "<<p<<endl;
    cout<<"Pointer arithmetic"<<endl;
    cout<<"p "<<p<<endl;
    cout<<"p+1 "<<p+1<<endl;
    cout<<"p-1 "<<p-1<<endl;    
}
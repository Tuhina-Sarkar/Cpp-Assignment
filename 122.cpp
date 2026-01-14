//reading line using getline
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name,address;
    cout<<"Enter name of the customer: ";
    getline(cin,name);
    cout<<"Enter address of the customer: ";
    getline(cin,address);
    cout<<endl;
    cout<<"CUSTOMER DETAILS: "<<endl;
    cout<<"NAME: "<<name<<endl;
    cout<<"ADDRESS: "<<address<<endl;
}
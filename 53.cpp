//program with multiple constructors
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Customer{
    private:
    string name,acc_no;
    int balance;
    public:
    Customer(){
        name="Tuhina Sarkar";
        acc_no="5686995434";
        balance=67890;
    }
    Customer(string n,string a,int b){
        name=n;
        acc_no=a;
        balance=b;
    }
    Customer(string n,string a){
        name=n;
        acc_no=a;
        balance=89990;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account no: "<<acc_no<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

};
int main(){
    Customer C1;
    Customer C2("Taniya Sarkar","6542111879",98700);
    Customer C3("Sushmita","876594321");
    C1.display();
    C2.display();
    C3.display();
}
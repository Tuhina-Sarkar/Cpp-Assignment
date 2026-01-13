//Initialise const data members in constructor
//Tuhina sarkar
#include<iostream>
#include<string>
using namespace std;
class Customer{
    private:
    string name,ac_no;
    int balance;
    string const bank_name;
    public:
    Customer(string n,string a,int b):bank_name("State Bank Of India"){//using initializer list
      name=n;
      ac_no=a;
      balance=b;
    
    }
    void deposit(int amount){
        cout<<" After depositing "<<amount<<" balance updates from "<<balance<<" to "<<" ";
        balance+=amount;
        cout<<balance<<endl;
    }
    void withdraw(int amount){
         cout<<" After withdrawing "<<amount<<" balance updates from "<<balance<<" to "<<" ";
        balance-=amount;
        cout<<balance<<endl;
    }
    void display_details(){
        cout<<name<<" has"<<" account "<<" in "<<bank_name<<" with balance "<<balance<<endl;
    }
};
int main(){
    string n,a;
    int b;
    cout<<"Enter name of the account holder: ";
    getline(cin,n);
    cout<<"Enter the account number: ";
    getline(cin,a);
    cout<<"Enter the balance: ";
    cin>>b;
    Customer C1(n,a,b);
    Customer C2("Avinash Singh","6770435756743",67475);
    C1.display_details();
    C1.deposit(6700);
    C2.display_details();
    C2.withdraw(500);
}
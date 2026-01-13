//tuhina sarkar
//program with private and public members
//withdraw and deposit amount
#include<iostream>
#include<string>
using namespace std;
class Bank{
    private:
    int bal,amt1,amt2;
    string name;
    public:
    string bank_name;
    Bank(int balance,int amount1,int amount2,string name1,string n){//Initialize
        bal=balance;
        amt1=amount1;
        amt2=amount2;
        name=name1;
        bank_name=n;
    }
    void deposit_amt(){
        bal=bal+amt2;
    }
    void withdraw_amt(){
        bal=bal-amt1;
    }
    void check(){
        cout<<"Name of the account holder: "<<name<<endl;
        cout<<"Name of the bank is: "<<bank_name<<endl;
        cout<<"The balance in your account is: "<<bal<<endl;
        cout<<"The amount to be withdrawn from your bank: "<<amt1<<endl;
        cout<<"The amount to be deposited in your account: "<<amt2<<endl;
        cout<<"New balance is: "<<bal;
    }
};
int main(){
    int amount1,amount2,balance;
    string name1,n;
    cout<<"Enter the amount you want to withdraw :";
    cin>>amount1;
    cout<<"Enter the amount you want to deposit :";
    cin>>amount2;
    cout<<"Enter the balance in your account: ";
    cin>>balance;
    cin.ignore();
    cout<<"Enter the name of the account holder: ";
    getline(cin,name1);
    cout<<"Enter name of the bank: ";
    getline(cin,n);
    Bank c1(amount1,amount2,balance,name1,n);
    c1.withdraw_amt();
    c1.deposit_amt();
    c1.check();
}

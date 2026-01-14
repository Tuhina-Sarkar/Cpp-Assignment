//Implementing bank system using OOPS
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Customer{
    private:
    string name;
    string bank_name;
    string IFSC;
    string acc;
    int bal;
    public:
    void input(){
        cout<<"Enter the name of the account holder: ";
        getline(cin,name);
        cout<<"Enter the name of the bank: ";
        getline(cin,bank_name);
        cout<<"Enter Account number: ";
        getline(cin,acc);
        cout<<"Enter IFSC code: ";
        getline(cin,IFSC);
        cout<<"Enter the balance in your account: ";
        cin>>bal;
    }
    void deposit(int a){
        bal+=a;
        cout<<"After depositing "<<a<<" in your account: Balance-> "<<bal<<endl;
    }
    void withdraw(int a){
        if(bal>a){
            bal-=a;
           cout<<"After withdrawing "<<a<<" from your account:mBalance-> "<<bal<<endl;  
        }
        else{
           cout<<"Balance insufficient to be withdrawn"<<endl;
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account no: "<<acc<<endl;
        cout<<"Bank name: "<<bank_name<<endl;
        cout<<"IFSC code: "<<IFSC<<endl;
        cout<<"Balance: "<<bal<<endl;
    }
};
int main(){
    Customer C;
    bool ch;
    int amt;
    C.input();
    cout<<"Enter choice: \n 0->withdraw\n1->deposit";
    cin>>ch;
    if(ch==0){
        cout<<"Enter amount to be withdrawn: ";
        cin>>amt;
        C.withdraw(amt);
    }
    else{
        cout<<"Enter amount to be deposited: ";
        cin>>amt;
        C.deposit(amt);
    }
    C.display();
}

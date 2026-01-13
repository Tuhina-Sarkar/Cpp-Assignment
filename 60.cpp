//Tuhina Sarkar
//program to initialize static data members
//program to calculate total balance in the bank
#include<iostream>
#include<string>
using namespace std;
class Customer{
    private:
    string name;
    int deposit_bal,withdraw_bal;
    string ac_no;
    public:
    static long total_bal;
    Customer(string n,int d,int w,string a){
        ac_no=a;
        name=n;
        deposit_bal=d;
        withdraw_bal=w;
        total_bal=total_bal+d-w;
    }
    void display(){
        cout<<"Name of the customer: "<<name<<endl;
        cout<<"Account no. of the customer: "<<ac_no<<endl;
        cout<<"amount deposited by the customer: "<<deposit_bal<<endl;
        cout<<"amount withdrawn by the customer: "<<withdraw_bal<<endl;
    }

};
long Customer::total_bal=0;
int main(){
    Customer C1("Tuhina ",65000,0,"115467896");
    Customer C2("Taniya",25000,0,"988676575");
    Customer C3("Tony",0,8500,"7659703567");
    cout<<"Total balance present in the bank is: "<<Customer::total_bal;
}
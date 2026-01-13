//program with constant object
//the initialised properties of object declared constant cannot be changed
//can only call constant member functions
//Tuhina sarkar
#include<iostream>
#include<string>
using namespace std;
class Customer{
    private:
    string name;//all these details cannot be changed in the future
    string acc_no;
    string bank_name;
    string IFSC;
    public:
    Customer(string n,string a,string i,string b){
        name=n;
        acc_no=a;
        bank_name=b;
        IFSC=i;
    }
    void display()const{
        cout<<"DISPLAYING DETAILS: "<<endl;
        cout<<"Name of the customer: "<<name<<endl;
        cout<<"Account number: "<<acc_no<<endl;
        cout<<"Bank name: "<<bank_name<<endl;
        cout<<"IFSC code: "<<IFSC<<endl;
    }
};
int main(){
    string n,i,a,b;
    cout<<"Enter name of the customer: ";
    getline(cin,n);
    cout<<"Enter account number: ";
    getline(cin,a);
    cout<<"Enter bank name: ";
    getline(cin,b);
    cout<<"Enter IFSC code: ";
    getline(cin,i);
    const Customer C1(n,a,i,b);
    C1.display();

}
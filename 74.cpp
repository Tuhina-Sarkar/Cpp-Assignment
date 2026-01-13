//program with constant member function
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    string Acc_no;
    float balance;
    public:
    BankAccount(string a,float b){
        Acc_no=a;
        balance=b;
    }
    void checkBal()const{
        cout<<"Total Balance in your account: "<<balance<<endl;
    }

};
int main(){
    BankAccount B("1100758364",89000);
    B.checkBal();//calling const member function

}
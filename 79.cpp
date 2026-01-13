//to demonstrate information hiding
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Customer{
    private:
    int bal;
    public:
    void inputbal(int balance){
        bal=balance;
    }
    void display(){
        cout<<"Balance in your account is: "<<bal;
    }
    
};
int main(){
    Customer Arun;
    Arun.inputbal(98000);
    Arun.display();
}
//to perform arithmetic operations using class
//Tuhina sarkar
#include<iostream>
using namespace std;
class OP{
    private:
    int num1,num2;
    public:
    OP(int n1,int n2){
        num1=n1;
        num2=n2;
    }
    int add(){
        return num1+num2;
    }
    int diff(){
        if(num1>num2){
            return num1-num2;
        }
        else{
            return num2-num1;
        }
    }
    int p(){
        return num1*num2;
    }
    int div(){
        if(num2!=0){
            return num1/num2;
        }
        else{
            return 0;
        }
    }
    int rem(){
        return num1%num2;
    }
};
int main(){
    int n,num;
    cout<<"Enter two numbers: ";
    cin>>n>>num;
    OP obj(n,num);
    cout<<"the sum of two numbers: "<<obj.add()<<endl;
    cout<<"The difference of two numbers: "<<obj.diff()<<endl;
    cout<<"product: "<<obj.p()<<endl;
    cout<<"Divison: "<<obj.div()<<endl;
    cout<<"Remainder: "<<obj.rem()<<endl;
}
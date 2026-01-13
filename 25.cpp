//Tuhina Sarkar
//using switch statement
#include<iostream>
using namespace std;
int main(){
    char sign;
    int a,b;
    cout<<"enter the operator to perform operation ";
    cin>>sign;
    cout<<"Enter the operands a and b";
    cin>>a>>b;
    switch(sign){
     case '+':cout<<"sum of "<<a<<"and "<<b<<"is "<<a+b;
     break;
     case '-':cout<<"difference of "<<a<<"and "<<b<<"is "<<a-b;
     break;
     case '*':cout<<"product of "<<a<<"and "<<b<<"is "<<a*b;
     break;
     case '/':cout<<"divison of "<<a<<"and "<<b<<"is "<<a/b;
     break;
    default:cout<<"invalid choice";
    }
}
//Tuhina Sarkar
//checking for +ve/-ve/0
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number you want to check";
    cin>>num;
    if (num>0){
        cout<<num<<" is positive"; 
    }
    else if(num<0){
        cout<<num<<" is negative";
    }
    else{
        cout<<"the number is zero";
    }
}
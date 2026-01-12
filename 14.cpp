//Tuhina sarkar
//demonstrate assignment operators
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a";
    cin>>a;
    b=a;
    cout<<"after assigning the value of a to b: b= "<<b<<endl;
    a+=5;
    cout<<"After incrementing value of a by 5: a+=5 -> "<<a<<endl;
    a-=2;
    cout<<"After decrementing value of a by 2: a-=2 -> "<<a<<endl;
    b/=2;
    cout<<"The value of : b/=2 -> "<<b<<endl;
    b%=3;
    cout<<"The value of: b%=3 -> "<<b<<endl;
}
//Tuhina Sarkar
//evaluating an algebraic expression
//(a+b)^3
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,result;
    cout<<"enter value of a";
    cin>>a;
    cout<<"enter value of b";
    cin>>b;
    result=pow(a,3)+3*pow(a,2)*b+3*a*pow(b,2)+pow(b,3);
    cout<<"result of (a+b)^3 = "<<result;
}

//Tuhina Sarkar
//simple interest
#include<iostream>
using namespace std;
int main(){
    double P,rate,SI;
    int time;
    cout<<"enter principal";
    cin>>P;
    cout<<"enter rate in percentage";
    cin>>rate;
    cout<<"enter time in years";
    cin>>time;
    SI=(P*rate*time)/100;
    cout<<"Simple interest"<<SI;
}

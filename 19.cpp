//Tuhina Sarkar
//finding leap year
#include<iostream>
using namespace std;
int main(){
    int year,f=0;
    cout<<"enter the year you want to check";
    cin>>year;
    if(year%400==0){
        f=1;
    }
    else if( year%4==0){
        f=1;
    }
    else if( year%100==0){
        f=0;
    }
    else{
        f=0;
    }
    if (f==0){
        cout<<year<<" is not a leap year";
    }
    else{
        cout<<year<<" is a leap year";
    }
}
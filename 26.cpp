//Tuhina Sarkar
//printing tribonacci series
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,n;
    a=0;
    b=0;
    c=1;
    cout<<"enter the size of the series";
    cin>>n;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(int i=3;i<n;i++){
        d=a+b+c;
        cout<<d<<" ";
        a=b;
        b=c;
        c=d;
    }
    

}
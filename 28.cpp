//Tuhina Sarkar
//printing fibonacci series using do-while
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,n,c,i=2;
    cout<<"Enter the size of series: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    do{
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        i++;
    }while(i<n);
}
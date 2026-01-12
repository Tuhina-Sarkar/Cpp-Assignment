//Tuhina Sarkar
//demonstrate the use of binary operators
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter values of a and b";
    cin>>a>>b;
    cout<<"bitwise and of a and b"<<(a&b)<<endl;
    cout<<"bitwise or of a and b"<<(a|b)<<endl;
    cout<<"bitwise not on a"<<~a<<endl;
    cout<<"bitwise XOR on a and b"<<(a^b)<<endl;
    cout<<"bitwize left shifting a by 2 bits"<<(a<<2)<<endl;
    cout<<"bitwize right shifting b by 2 bits"<<(b>>2)<<endl;
}
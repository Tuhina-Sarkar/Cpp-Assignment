//Tuhina Sarkar
//to copy string manually
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,c="";
    cout<<"Enter the String: ";
    getline(cin,s);
    for(char ch:s){
        c=c+ch;
    }
    cout<<"The original string stored in s : "<<s<<endl;
    cout<<"After copying the string c is: "<<c;
}
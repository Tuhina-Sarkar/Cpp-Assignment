//Tuhina Sarkar
//Finding the length of string
//without any functions
#include<iostream>
#include<string>
using namespace std;
int main(){
    int c=0;
    string s;
    cout<<"Enter string :";
    getline(cin,s);
    for (char ch:s){
        c=c+1;
    }
    cout<<"Length of the string: "<<c;
}
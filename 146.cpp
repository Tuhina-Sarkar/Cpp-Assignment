//Program using try catch block
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    int c;
    cout<<"Enter elements a and b: ";
    cin>>a>>b;
    try{
        if(b==0){
            throw"Not Divisible By Zero";
        }
        else{
          c=a/b;
          cout<<"a/b is: "<<c; 
        }
    }
catch( const char *ch){
    cout<<ch;
}
}
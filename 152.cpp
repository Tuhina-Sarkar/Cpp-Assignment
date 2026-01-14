//program rethrowing an exception
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
void fun1(int m){
    try{
        if(m<0){
            throw m;
        }
        else{
            cout<<m;
        }
    }
    catch(int i){
        cout<<"1st throw inside function is caught using catch\n";
        throw; //rethrowing
    }
}
int main(){
    try{
        fun1(-6);
    }
    catch(int k){
        cout<<"Catching rethrow in main function";
    }
}
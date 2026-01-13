//Tuhina Sarkar
//using nested if-else
//divisible by 2 and 3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    if(n%2==0){
        if(n%3==0){
            cout<<n<<" is divisible by 2 and 3";
        }
        else{
            cout<<n<<" is divisible by 2 but not by 3";
        }
    }
    else{
        cout<<"not divisible by 2";
    }
}
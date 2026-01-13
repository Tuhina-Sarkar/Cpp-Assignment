//to find the greatest of two numbers
//Tuhina Sarkar
#include<iostream>
using namespace std;
class Find{
    public:
    int n;

    int check(Find f){
        if(n>f.n){
            return n;
        }
        else{
            return f.n;
        }
    }
};
int main(){
    Find f,f1;
    cout<<"Enter first number: ";
    cin>>f.n;
    cout<<"Enter second number: ";
    cin>>f1.n;
    cout<<"Greatest element is: "<<f.check(f1);
}
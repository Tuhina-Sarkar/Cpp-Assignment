//Function Overloading
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Addition{
    public:
    void add(int a,int b){
        cout<<"Addition of two integers is: "<<a+b<<endl;
    }
    void add(float a,float b){
        cout<<"Addition of two floating point numbers: "<<a+b<<endl;
    }
};
int main(){
    Addition N;
    N.add(8.7f,1.2f);
    N.add(15,84);
}
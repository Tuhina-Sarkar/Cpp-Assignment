//program to swap two values using  friend
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Task{
    private:
    int num1,num2,temp;
    public:
    Task(int a,int b){
        num1=a;
        num2=b;
    }
    friend void swap(Task T1);
};
void swap(Task T1){
    cout<<"Before swapping the value of num1 is: "<<T1.num1<<" and num2 is: "<<T1.num2<<endl;
    T1.temp=T1.num1;
    T1.num1=T1.num2;
    T1.num2=T1.temp;
    cout<<"After swapping the value of num1 is: "<<T1.num1<<" and value of num2 is: "<<T1.num2<<endl;
}
int main(){
    int a,b;
    cout<<"Enter two numbers one by one in a and b respectively ";
    cin>>a>>b;
    Task T1(a,b);
    swap(T1);
}

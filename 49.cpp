//Tuhina Sarkar
//Nested classes
#include<iostream>
using namespace std;
class A{
    public:
    class B{
        private:
        int n;
        public:
        void getnum(int num){
            n=num;
        }
        void display(){
            cout<<"The number inside the inner class is : "<<n;
        }
    };
};
int main(){
    A::B obj;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    obj.getnum(n);
    obj.display();
}
//using parametrized constructors
//Tuhina sarkar
#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name,address,ph_no;
    int age;
    public:
    Person(string n,string add,string p,int a){
        name=n;
        address=add;
        ph_no=p;
        age=a;
    }
    void display(){
        cout<<"Name of the person is: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Phone number: "<<ph_no<<endl;
        cout<<"Address: "<<address<<endl;
    }
};
int main(){
    int a;
    string n,add,p;
    cout<<"Enter name ";
    cin>>n;
    cout<<"Enter age: ";
    cin>>a;
    cout<<"Enter Phone number: ";
    cin>>p;
    cout<<"Enter address: ";
    cin>>add;
    Person P(n,add,p,a);
    P.display();
}
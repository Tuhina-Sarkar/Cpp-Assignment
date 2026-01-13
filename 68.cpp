//to Compare private data of two classes using friend
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Employee2;
class Employee1{
    private:
    int salary;
    string name,ID;
    public:
    Employee1(string n,string i,int s){
        name=n;
        salary=s;
        ID=i;
    } 
    friend void compare(Employee1 E1,Employee2 E2);
};
class Employee2{
    private:
    int salary;
    string ID,name;
    public:
    Employee2(string n,string i,int s){
        name=n;
        ID=i;
        salary=s;
    }
    friend void compare(Employee1 E1,Employee2 E2);
};
void compare(Employee1 E1,Employee2 E2){
    if(E1.salary>E2.salary){
        cout<<E1.name<<" has higher salary "<<E2.name<<endl;
    }
    else if(E1.salary<E2.salary){
        cout<<E1.name<<" has lower salary "<<E2.name<<endl;
    }
    else{
        cout<<E1.name<<" has equal salary "<<E2.name<<endl;
    }
}
int main(){
    Employee1 E1("Abhishek Kumar","EMP679832",76000);
    Employee2 E2("Harry Singh","EMP76478525",82000);
    compare(E1,E2);
}


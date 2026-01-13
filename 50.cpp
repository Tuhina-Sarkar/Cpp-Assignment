//Tuhina Sarkar
//program to demonstrate count number of objects using static
#include<iostream>
#include<string>
using namespace std;
class Toy{
private:
string name;
int price;
public:
static int count;
Toy(string n,int p){
    name=n;
    price=p;
    count=count+1;
}
void display(){
    cout<<"name of the toy is: "<<name<<endl;
    cout<<"Price of the toy is: "<<price<<endl;
}
};
int Toy::count=0;
int main(){
    Toy T1("Doll",1950);
    Toy T2("Car",300);
    Toy T3("Plushie",650);
    cout<<"First toy: "<<endl;
    T1.display();
    cout<<"Second toy: "<<endl;
    T2.display();
    cout<<"Third toy: "<<endl;
    T3.display();
    cout<<"Total number of objects : "<<Toy::count;
}
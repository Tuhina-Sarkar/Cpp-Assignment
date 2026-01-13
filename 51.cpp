//Tuhina Sarkar
//Program with default constructor
#include<iostream>
#include<string>
using namespace std;
class Toy{
    private:
    int price;
    string name;
    public:
    Toy(){
        price=2000;
        name="Remote controlled robot";
    }
    void display(){
        cout<<"Name of the toy is: "<<name<<endl;
        cout<<"Price of the toy is: "<<price<<endl;
    }
};
int main(){
    Toy T1;
    T1.display();
}
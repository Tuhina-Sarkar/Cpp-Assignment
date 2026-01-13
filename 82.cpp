//multilevel inheritance
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Human{
    protected:
    string name;
    char gender;
    int age;
    string religion;
    public:
    void eats(){
        cout<<"Eats "<<endl;
    }
    void drinks(){
        cout<<"Drinks "<<endl;
    }
    
};
class Parent:public Human{
    protected:
    string quality;
    string address;
    private:
    void earns(){
        cout<<"Earns "<<endl;
    }

};
class Child:public Parent{
    private:
    string DOB;
    string stream;
    public:
    void input(){
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter gender: M for male\nF for female";
        cin>>gender;
        cin.ignore();
        cout<<"Enter religion: ";
        getline(cin,religion);
        cout<<"Enter Quality: ";
        getline(cin,quality);
        cout<<"Enter Address: ";
        getline(cin,address);
        cout<<"Enter DOB: ";
        getline(cin,DOB);
        cout<<"Enter Stream: ";
        getline(cin,stream);
    }
    void studies(){
        cout<<"studies ";
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Religion: "<<religion<<endl;
        cout<<"Quality: "<<quality<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"DOB: "<<DOB<<endl;
        cout<<"Stream: "<<stream<<endl;
    }

};
int main(){
    Child C1;
    C1.input();
    C1.eats();
    C1.drinks();
    C1.display();
    

}
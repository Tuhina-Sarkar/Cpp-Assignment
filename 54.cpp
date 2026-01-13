//program with copy constructor
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Toy{
    private:
    string name,age_category;
    int price;
    public:
    Toy(string n,string a,int p){
        name=n;
        age_category=a;
        price=p;
    }
    Toy(Toy &b){//copy constructor
        name=b.name;
        age_category=b.age_category;
        price=b.price;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age category: "<<age_category<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    string n,a;
    int p;
    cout<<"Enter name of the toy: ";
   getline(cin,n);
    cout<<"Enter age category of the toy: ";
    getline(cin,a);
    cout<<"Enter price of the toy: ";
    cin>>p;
    Toy T1(n,a,p);
    Toy T2(T1);
    cout<<"details of first object: "<<endl;
    T1.display();
    cout<<"details of second(copied) object: "<<endl;
    T2.display();

}
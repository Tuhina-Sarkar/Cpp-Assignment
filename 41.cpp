//Tuhina Sarkar
//defining a simple class and creating objects
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth,ar,pr;
    public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
        ar=0;
        pr=0;
    }
    void area(){
        ar=length*breadth;
    }
    void perimeter(){
        pr=2*(length+breadth);
    }
    void display(){
        cout<<"The length is: "<<length<<endl;
        cout<<"The breadth is: "<<breadth<<endl;
        cout<<"Area of rectangle is: "<<ar<<endl;
        cout<<"Perimeter of rectangle is: "<<pr;
    }
};
int main(){
    int l,b;
    cout<<"Enter length of rectangle :";
    cin>>l;
    cout<<"Enter breadth of rectangle :";
    cin>>b;
    Rectangle R(l,b);
    R.area();
    R.perimeter();
    R.display();
}
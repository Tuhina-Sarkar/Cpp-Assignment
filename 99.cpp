//Virtual functions
//Tuhina Sarkar
#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area(){
        cout<<"Area of Shape(base class)";
    }
};
class Rectangle:public Shape{
    public:
    void area(){
        cout<<"Area of rectangle is: Length*breadth "<<endl;
    }
};
class Circle:public Shape{
    public:
    void area(){
        cout<<" Area of circle is: pi*radius*radius"<<endl;
    }
};
int main(){
    Shape*S;
    Rectangle R;
    Circle C;
    S=&R;
    S->area();
    S=&C;
    S->area();
}
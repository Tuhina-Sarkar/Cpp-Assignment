//prpgram to calculate area using class object
//Tuhina Sarkar
#include<iostream>
#include<math.h>
using namespace std;
class Area{
    private:
    int length,breadth,height;
    public:
    Area(int l,int b,int h){
        length=l;
        breadth=b;
        height=h;
    }
    int calArea(){
       return (2*((length*breadth)+(breadth*height)+(height*length))); 
    }
};
int main(){
    int l1,b1,h1;
    cout<<"Enter length,Breadth and height of a cuboid: ";
    cin>>l1>>b1>>h1;
    Area obj(l1,b1,h1);
    cout<<"Area of a cuboid: "<<obj.calArea()<<"sq.units";
}
//Tuhina Sarkar
//area of rectangle,square and circle
#include<iostream>
using namespace std;
int main(){
    int side,length,breadth,ch;
    float radius;
    const double pi=3.1415926535897;
    cout<<"enter\n 1.area of square\n 2.area of rectangle\n 3.area of circle";
    cin>>ch;
    switch(ch){
        case 1:cout<<"enter side of square";
               cin>>side;
               cout<<"area of square is"<<side*side;
               break;
        case 2:cout<<"enter length and breadth of rectangle";
               cin>>length>>breadth;
               cout<<"area of rectangle is"<<length*breadth;
               break;
        case 3:cout<<"enter radius of circle";
               cin>>radius;
               cout<<"area of circle"<<pi*radius*radius;
               break;
        default:cout<<"invalid choice";             
    }

}
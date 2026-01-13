//single inheritance between vehicle and car
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
    string model;
    string brand;
    int wheels;
    string price;
    public:
    Vehicle(string b,string m,int wh,string p){
        model=m;
        brand=b;
        wheels=wh;
        price=p;
    }
    void start(){
        cout<<"Vehicle starts "<<endl;
    }
    void stop(){
        cout<<"Vehicle stops "<<endl;
    }
};
class Car:public Vehicle{
    int ma_year;
    int windows;
    int seats;
    public:
    Car (string b,string m,int wh,string p,int y,int w,int se):Vehicle(b,m,wh,p){
        ma_year=y;
        windows=w;
        seats=se;
    }
    void musicstarts(){
        cout<<"Music is ON! "<<endl;
    }
    void display(){
        cout<<"Model: "<<model<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Wheels: "<<wheels<<endl;
        cout<<"Seats: "<<seats<<endl;
    }
};
int main(){
    Car C1("Mercedes Benz","C220",4,"44-51 lakhs",2022,6,5);
    C1.display();
    C1.start();
    C1.stop();
}
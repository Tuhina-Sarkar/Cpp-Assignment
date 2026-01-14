//program checking if file exists
//Tuhina Sarkar
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream fre;
    fre.open("check.txt");
    if(fre){
        cout<<"File exists ";
    }
    else{
        cout<<"File doesnot exists. ";
    }
    fre.close();
}
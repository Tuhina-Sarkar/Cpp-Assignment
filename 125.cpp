//program demonstrating file creation
//Tuhina Sarkar
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fwr;
    fwr.open("File.txt");
    cout<<"File is created successfully"<<endl;
    fwr<<"This is a C++ Assignment"<<endl;
    fwr.close();

}
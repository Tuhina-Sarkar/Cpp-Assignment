//writing in a file
//Tuhina Sarkar
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fwr;
    fwr.open("File.txt");
    fwr<<"This is a c++ assignment which demonstrates basics of file handling"<<endl;
    fwr<<"Done by Tuhina Sarkar"<<endl;
    fwr.close();
}
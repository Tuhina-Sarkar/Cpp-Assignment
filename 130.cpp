//to append data to a file
//Tuhina Sarkar
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream fwr;
    fwr.open("File.txt",ios::app);
    fwr<<"This is a line which is appended to the file by Tuhina Sarkar.";
    fwr.close();
    cout<<"Data appended successfully ";

}
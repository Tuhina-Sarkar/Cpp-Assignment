//program to store student data using file handling
//Tuhina sarkar
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream fwr;
    string name;
    int roll;
    string phno;
    string address;
    string standard;
    string school;
    fwr.open("Studentdata.txt");
    cout<<"Enter Student name: ";
    getline(cin,name);
    cout<<"Enter Roll no: ";
    cin>>roll;
    cin.ignore();
    cout<<"Enter phone number: ";
    getline(cin,phno);
    cout<<"Enter Address: ";
    getline(cin,address);
    cout<<"Enter Standard: ";
    getline(cin,standard);
    cout<<"Enter school name: ";
    getline(cin,school);
    fwr<<"Name: "<<name<<"\n"<<"Roll no: "<<roll<<"\n"<<"Phone number: "<<phno<<"\n"
    <<"Address: "<<address<<"\n"<<"Standard: "<<standard<<"\n"<<"School name: "<<school<<"\n";
    cout<<" student Data entered successfully!";

}
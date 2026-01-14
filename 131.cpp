//opening the files in different modes
//Tuhina Sarkar
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream fwr;
    fwr.open("Mode.txt",ios::out);
    fwr<<"Hi! Its Tuhina here.";
    cout<<"data is written in write mode"<<endl;
    fwr.close();
    fwr.open("Mode.txt",ios::app);
    fwr<<"Nice to meet you.(appended line)";
    cout<<"Line appended successfully"<<endl;
    fwr.close();
    ifstream fre;
    fre.open("Mode.txt",ios::in);
    string line;
    while(getline(fre,line)){
        cout<<line<<endl;
    }
    fre.close();



}
//program reading from a file
//Tuhina Sarkar
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fre;
    fre.open("File.txt");
    char ch;
    ch=fre.get();
    while(!(fre.eof())){
        cout<<ch;
        ch=fre.get();
    }
    fre.close();
}
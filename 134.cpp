//program reading file until eof
//TUHINA sarkar
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream fre;
    fre.open("Mode.txt");
    char ch;
    ch=fre.get();
    while(!(fre.eof())){
        cout<<ch;
        ch=fre.get();
    }
    fre.close();
}
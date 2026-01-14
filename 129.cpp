//program counting words in a file
//Tuhina Sarkar
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int count=0;
    ifstream fre;
    fre.open("File.txt");
    char c;
    while(fre.get(c)){
        if(c==' '||c=='\n'){
            count++;
        }
    }
    cout<<"Total number of words: "<<count;
    fre.close();
}
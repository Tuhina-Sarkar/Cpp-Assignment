//Tuhina Sarkar
//demonstrate type casting
#include<iostream>
using namespace std;
int main(){
    float f;
    int s;
    cout<<"Enter a floating number: ";
    cin>>f;
    s=int(f);
    cout<<"The integer part of "<<f<<" is "<<s<<endl;
    cout<<"The fractional part of"<<f<<"is"<<f-s;
}

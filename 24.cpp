//Tuhina Sarkar
//grading system
#include<iostream>
using namespace std;
int main(){
    int i;
    float mark,s=0,avg;
    cout<<"Enter marks of each subject one by one";
    for(i=1;i<=5;i++){
        cin>>mark;
        s=s+mark;
    }
    avg=s/5;
    if(avg>=91 && avg<100){
        cout<<"your grade is A1";
    }
    else if(avg>=81 && avg<91){
        cout<<"your grade is A2";
    }
    else if(avg>=71 && avg<81){
        cout<<"your grade is B1";
    }
    else if(avg>=61 && avg<71){
        cout<<"your grade is B2";
    }
    else{
        cout<<"your grade is C . TRY HARDER!!";
    }
}
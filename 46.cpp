//program to compare two objects
//Tuhina Sarkar
#include<iostream>
using namespace std;
class Student{
    private:
    int mark1,mark2;
    public:
    bool compare(Student S1){
        if (mark1==S1.mark2){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Student S,S1;
    int mark1,mark2;
    cout<<"Enter marks of first student: ";
    cin>>mark1;
    cout<<"Enter marks of second student: ";
    cin>>mark2;
    cout<<"Are the marks of both students equal ?";
    if (S.compare(S1)==0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
}

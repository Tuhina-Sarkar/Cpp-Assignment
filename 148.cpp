//program throwing a string exception
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,i,index;
    cout<<"Enter range of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements one by one: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter index you want to access: ";
    cin>>index;
    try{
        if((index>=n)||(index<0)){
            throw"Index out of the range";
        }
        else{
            cout<<"the element in the given index is: "<<a[index];
        }
    }
    catch(const char *ch){
        cout<<ch;
    }
}
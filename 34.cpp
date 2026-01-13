//Tuhina Sarkar
//program to reverse an array
#include<iostream>
using namespace std;
int main(){
    int a[10],b[10],i;
    cout<<"Enter elements one by one: ";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    //reverse an array
    for(int i=9;i>=0;i--){
        b[9-i]=a[i];
    }
    //displaying the reversed array
    cout<<"The reversed array is ";
    for(int i=0;i<10;i++){
        cout<<b[i]<<" ";
    }

}
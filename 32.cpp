//Tuhina Sarkar
//finding the largest element of an array
#include<iostream>
using namespace std;
int main(){
    int a[10],i;
    cout<<"Enter elements one by one : ";
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    int max=a[0];
    //finding max
    for(i=1;i<10;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    cout<<"The maximum element of the array is: "<<max;
}
//Tuhina Sarkar
//finding the second largest element
#include<iostream>
using namespace std;
int main(){
    int n,max,sec_max;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements one by one: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    max=0,sec_max=0;
    for(int i=0;i<n;i++){
       if(max<a[i]){
        max=a[i];
       }
    }
    //finding sec max.
    for(int i=0;i<n;i++){
       if((sec_max<a[i])&&(a[i] != max)){
        sec_max=a[i];
       }
    }
    cout<<"The second maximum element of the array is: "<<sec_max;
}
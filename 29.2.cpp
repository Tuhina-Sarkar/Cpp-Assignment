//Tuhina Sarkar
//use of break statement 
//searching elements
#include<iostream>
using namespace std;
int main(){
    int arr[10],item,i,f=0;
    cout<<"Enter array elements one by one: ";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Enter searching element : ";
    cin>>item;
    for(i=0;i<10;i++){
        if(arr[i]==item){
            f=1;
            break;
        }
        else{
            f=0;
        }
    }
    if(f==1){
        cout<<"Search item found !!";
    }
    else{
        cout<<" Not found";
    }
}
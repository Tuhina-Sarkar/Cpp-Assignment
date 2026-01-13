//Tuhina Sarkar
//input and display array elements
#include<iostream>
using namespace std;
int main(){
    int r1,c1,i,j;
    cout<<"Enter no. of rows of the array :";
    cin>>r1;
    cout<<"Enter no. of columns of the array :";
    cin>>c1;
    int a[r1][c1];
    cout<<"Enter elements one by one : ";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    //displaying elements
    cout<<"the array is :"<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
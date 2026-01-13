//Tuhina Sarkar
//matrix addition
#include<iostream>
using namespace std;
int main(){
    int a[2][3],b[2][3],c[2][3],i,j;
    cout<<"Enter elements one by one in first matrix :";
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements one by one in second matrix :";
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    cout<<"the result of addition in third matrix is: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}
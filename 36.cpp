//Tuhina Sarkar
//matrix multiplication
#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2,i,j,k;
    cout<<"Enter rows of first matrix: ";
    cin>>r1;   
    cout<<"Enter columns of first matrix: ";
    cin>>c1;
    cout<<"Enter rows of second matrix: ";
    cin>>r2;
    cout<<"Enter columns of second matrix: ";
    cin>>c2;
    int a[r1][c1],b[r2][c2];
    if(c1==r2){
        int c[r1][c2];
        cout<<"Enter elements of the first matrix one by one: ";
        for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix one by one: ";
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    //matrix multiplication
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                c[i][j]=0;
                for(k=0;k<r2;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"The result of matrix multiplication is: "<<endl;
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Multiplication not possible ";
    }
    
}
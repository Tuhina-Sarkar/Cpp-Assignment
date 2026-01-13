//Tuhina Sarkar
//use of goto
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if((i==5)&&(j==1)){
                goto loop_end;
            } 
            cout<<"* "<<" ";      
        }
        cout<<endl; 
    }
    loop_end:
    cout<<endl<<"nested loops exit";//skips the entire 5th row
}
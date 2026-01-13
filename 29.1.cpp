//Tuhina Sarkar
//use of  continue
//printing only odd numbers
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the range of odd numbers ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
}
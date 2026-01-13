//Tuhina Sarkar
//table using while loop
#include<iostream>
using namespace std;
int main(){
    int c=1,n;
    cout<<"Enter the number you want to see the table of";
    cin>>n;
    while (c<=10){
        cout<<n<<" * "<<c<<" = "<<n*c<<endl;
        c++;
    }
}
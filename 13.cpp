//Tuhina Sarkar
//demonstrate logical operators
#include<iostream>
#include<string>
using namespace std;
int main(){
    //movie ticket booking
    bool seat,payment;
    cout<<"are seats available ?";
    cin>>seat;
    cout<<"is payment successful ?";
    cin>>payment;
    if(!(seat=1)){
        cout<<"seats are not available";
        
    }
    else if((seat==1)&&(payment==1)){
        cout<<"your seats are booked successfully";
       
    }
    else if(seat==0||payment==0){
        cout<<"you can not book a ticket";
    }
    else{
        cout<<"seats cant be booked!!";
    }
    
    
}
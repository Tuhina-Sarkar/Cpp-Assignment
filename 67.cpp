//Tuhina sarkar
//to add two complex numbers using friend function
#include<iostream>
using namespace std;
class Complex{
   private:
   int real,imaginary;
   public:
   Complex(int r,int i){
        real=r;
        imaginary=i;
   }
   friend void Add_complex(Complex C1,Complex C2);
};
  void Add_complex(Complex C1,Complex C2){
    cout<<"the sum of two complex numbers: "<<(C1.real+C2.real)<<"+"<<(C1.imaginary+C2.imaginary)<<"i";
   }
   int main(){
    int r,c,r1,c1;
    cout<<"Enter real and imaginary part of first complex number: ";
    cin>>r>>c;
     cout<<"Enter real and imaginary part of second complex number: ";
    cin>>r1>>c1;
    Complex C1(r,c),C2(r1,c1);
    Add_complex(C1,C2);


   }
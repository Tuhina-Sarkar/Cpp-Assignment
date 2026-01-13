//program with static member function
// used to acess the static member which is declared in private
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Toy{
    private:
    string name,category,colour;
    int price;
    static int No_toys;//static variable declared private
    public:
    Toy(string n,string c,int p,string co){
        name=n;
        colour=co;
        category=c;
        price=p;
        No_toys++;
    }
    static void selling(){
        cout<<"No. of Toys sold: "<<No_toys;
    }
    void display(){
        cout<<"Name of the toy: "<<name<<endl;
        cout<<"category: "<<category<<endl;
        cout<<"Colour: "<<colour<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int Toy::No_toys=0;
int main(){
    string n,c,co;
    int p;
    cout<<"Enter name of the toy: ";
    getline(cin,n);
    cout<<"Enter category of the toy: ";
    getline(cin,c);
    cout<<"Enter colour of the toy: ";
    getline(cin,co);
    cout<<"Enter price of the toy: ";
    cin>>p;
    Toy T1(n,c,p,co),T2("Iron Man","Figurine",2500,"Red and yellow"),T3("Puzzle","Creative toy",500,"blue");
    T1.display();
    T2.display();
    T3.display();
    Toy::selling();
}
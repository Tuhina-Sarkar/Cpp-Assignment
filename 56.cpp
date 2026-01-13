//using destructor to show object destruction
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Railways{
    private:
    int slno,train_no,no_bogies;
    string name,destination,arrival;
    public:
    Railways(int n,int n1,string na,string d,string a){
        cout<<"Object is created"<<endl;
        slno=1;
        train_no=n;
        no_bogies=n1;
        name=na;
        destination=d;
        arrival=a;
    }
    Railways(){
        slno=2;
        train_no=76005;
        no_bogies=9;
        name="Lokmanya Tilak";
        destination="maharashtra";
        arrival="Odisha";
    }
    ~Railways(){
        cout<<endl;
        cout<<"Object destroyed!! "<<slno<<endl;
    }
    void display(){
        cout<<endl;
        cout<<"slno: "<<slno<<" ";
        cout<<"Train no: "<<train_no<<endl;
        cout<<"Train name: "<<name<<endl;
        cout<<"No of bogies: "<<no_bogies<<endl;
        cout<<"Destination point: "<<destination<<endl;
        cout<<"Arrival point: "<<arrival<<endl;
    }
};
int main(){
    int n,n1;
    string a,d,na;
    cout<<"Enter train no: ";
    cin>>n;
    cin.ignore();
    cout<<"Enter train name: ";
    getline(cin,na);
    cout<<"Enter no. of bogies: ";
    cin>>n1;
    cin.ignore();
    cout<<"Enter destination point: ";
    getline(cin,d);
    cout<<"Enter arrival point: ";
    getline(cin,a);
    Railways Train1(n,n1,na,d,a);
    Railways Train2;
    cout<<endl;
    Train1.display();
    Train2.display();
}
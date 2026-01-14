//Employee payroll system
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Employee{
    protected:
    string name;
    string ID;
    string department;
    string designation;
    public:
    Employee(string n,string i,string d,string de){
        name=n;
        ID=i;
        department=d;
        designation=de;
    }
    void display(){
        cout<<"NAME: "<<name<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"DEPARTMENT: "<<department<<endl;
        cout<<"DESIGNATION: "<<designation<<endl;
    }

};
class Payroll:public Employee{
    private:
    int basic_pay;
    int DA;
    int Allowance_facilities;
    int PF;
    int PT;
    int IncomeTax;
    int others;
    string pay_period;
    public:
    Payroll(int b,int da,int a,int pf,int pt,string pa,int in,int o,string n,string i,string d,string de):Employee(n,i,d,de){
        basic_pay=b;
        DA=da;
        Allowance_facilities=a;
        PF=pf;
        PT=pt;
        IncomeTax=in;
        others=o;
        pay_period=pa;
    }
    friend void payroll(Payroll P);
};
void payroll(Payroll P){
    float gross_sal;
    float deductions;
    int pay_period;
    float total;
    gross_sal=P.basic_pay+P.DA+P.Allowance_facilities;
    deductions=P.PF+P.PT+P.IncomeTax+P.others;
    total=gross_sal-deductions;
    cout<<endl<<"EMPLOYEE DETAILS "<<endl;
    cout<<"Employee ID: "<<P.ID<<endl;
    cout<<"Employee Name: "<<P.name<<endl;
    cout<<"Designation: "<<P.designation<<endl;
    cout<<"Department: "<<P.department<<endl;
    cout<<"Pay Period: "<<P.pay_period<<endl;
    cout<<"______________________________________________"<<endl;
    cout<<"EARNINGS: ";
    cout<<"Basic Pay: "<<P.basic_pay<<endl;
    cout<<"DA: "<<P.DA<<endl;
    cout<<"ALLOWANCES FACILITIES: "<<P.Allowance_facilities<<endl;
    cout<<"________________________________________________"<<endl;
    cout<<"DEDUCTIONS: ";
    cout<<"Provident Fund: "<<P.PF<<endl;
    cout<<"Professional Tax: "<<P.PT<<endl;
    cout<<"Income Tax: "<<P.IncomeTax<<endl;
    cout<<"Other Deductions: "<<P.others<<endl;
    cout<<"_________________________________________________"<<endl;
    cout<<"NET SALARY: "<<total<<endl;
    cout<<"Date: "<<__DATE__;
}
int main(){
    Payroll P(25000,5000,11000,3000,200,"January 2026",2500,300,"Tuhina Sarkar","E5629","IT","Software Engineer");
    payroll(P);
}
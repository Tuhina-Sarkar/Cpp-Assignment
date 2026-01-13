//to show ambiguity in multiple inheritance
//Tuhina Sarkar
#include<iostream>
#include<string>
using namespace std;
class Terrestrial{
    protected:
    int nolegs;
    string movetype;
    string habitat="Land";
    public:
    Terrestrial(int n,string m){
        nolegs=n;
        movetype=m;
    }
};
class Aquatic{
    protected:
    string habitat="Water body";
    public:


};
class Amphibian:public Terrestrial,public Aquatic{
    protected:
    string species;
    bool liveLand=1;
    bool liveWater=1;
    public:
    Amphibian(string s,int n,string m):Terrestrial(n,m){
        species=s;
    }
    void show(){
        cout<<"Species: "<<species<<endl;
        cout<<"No. of legs: "<<nolegs<<endl;
        cout<<"Habitat: "<<habitat<<endl;
    }
};
int main(){
    Amphibian A("Frog",4,"Hops");
    A.show();
}
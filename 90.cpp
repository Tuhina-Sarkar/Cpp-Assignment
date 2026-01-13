//to show ambiguity in multiple inheritance
//also resolved the ambiguity using scope resolution error
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
        cout<<"Habitat(land): "<<Terrestrial::habitat<<endl;
        cout<<"Habitat(Water): "<<Aquatic::habitat<<endl;
    }
};
int main(){
    Amphibian A("Frog",4,"Hops");
    A.show();
}
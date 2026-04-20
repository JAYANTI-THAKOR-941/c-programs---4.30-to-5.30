#include<iostream>
using namespace std;

class Calc{
    public:
        int add(int a,int b){
            cout<<"Addition:"<<a+b<<endl;
        }
        double add(double a,double b,double c){
            cout<<"Addition:"<<a+b+c<<endl;
        }
        string add(string fname,string lname){
            cout<<"FullName:"<<fname + lname<<endl;
        }
        int add(int x,int y,int z){
            cout<<"Addition:"<<x+y+z<<endl;
        }
};
int main(){
    Calc c;
    // c.add(4.2,4.0,2.3);
    c.add("Jayanti ","Thakor");
    c.add(50,23);
    return 0;
}
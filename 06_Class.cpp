#include<iostream>
using namespace std;

class Hello{
    public:
        void greet(){
            cout<<"Hey Developers.!!";
        }
        void sayHello(){
            cout<<"Hello Everyone.!"<<endl;
        }
};
int main(){
    Hello h;
    h.greet();
    h.sayHello();
    return 0;
}
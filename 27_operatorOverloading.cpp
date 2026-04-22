#include<iostream>
using namespace std;

class Demo{
    int num;
    public:
        Demo(int n){
            num = n;
        }
        void operator ++(){
            num += 5;
        }

        void printNumber(){
            cout<<"\nNumber is:"<<num<<endl;
        }
};

int main(){

    Demo d(50);
    for(int i=1;i<=10;i++){
        ++d;
        d.printNumber();
    }
    return 0;
}
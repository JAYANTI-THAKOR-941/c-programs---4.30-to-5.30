#include<iostream>
#include<math.h>
using namespace std;


class Number{
    int num;
    
    public:
        Number(int n){
            num = n;
        }
        bool operator < (Number obj){
            return obj.num;
        }

        void displayNumber(){
            cout<<num<<endl;
        }
};

int main(){

    Number obj1(50),obj2(30);

    // cout<<"SQRT Is:"<<sqrt(9)<<endl;

    // cout<<"Power is : "<<pow(5,3)<<endl;

    if(obj1 < obj2){
        cout<<"Maximum Number is :";
        obj1.displayNumber();
    }
    else{
       cout<<"Maximum Number is:"; 
       obj2.displayNumber();
    }
    return 0;
}
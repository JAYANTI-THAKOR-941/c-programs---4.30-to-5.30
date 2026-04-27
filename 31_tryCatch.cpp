#include<iostream>
using namespace std;

int main(){

    int num;

    try{
        cout<<"Enter any number:";
        cin>>num;

        if(num == 0){
            throw "Not allow using 0 to division.!";
        }
        
        cout<<"Division is: "<<num / 5<<endl;
    }
    catch(const char *err){
        cout<<"Error:"<<err<<endl;
    }

    return 0;
}
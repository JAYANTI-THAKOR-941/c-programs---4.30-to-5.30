#include<iostream>
using namespace std;

int main(){

    int num;
    try{
        cout<<"Ente any number:";
        cin>>num;

        if(num < 0){
            throw "Nagitive number is not allow.";
        }
        cout<<"Square is : "<<num*num<<endl;
    }
    catch(const char *msg){
        cout<<msg<<endl;
    }
    catch(...){
        cout<<"Unkonwn error.!!"<<endl;
    }

    return 0;
}
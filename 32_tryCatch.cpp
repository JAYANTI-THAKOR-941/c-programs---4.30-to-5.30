#include<iostream>
using namespace std;

int main(){

    int nums[5] = {10,20,40,50,30};
    int index;

    try{
        cout<<"Enter an index:";
        cin>>index;

        if(index > 5 || index < 0){
            throw "Invalid index number.";
        }
        cout<<"Element:"<<nums[index]<<endl;
    }
    catch(const char *msg){
        cout<<"Errror:"<<msg<<endl;
    }

    return 0;
}
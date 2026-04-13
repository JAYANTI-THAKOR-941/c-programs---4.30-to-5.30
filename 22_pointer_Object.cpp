#include<iostream>
using namespace std;

int main(){
    
    int *ptr;

    ptr = new int;// 4 bytes

    cout<<"Enter any number:";
    cin>>*ptr;

    cout<<"Number is "<<*ptr<<endl;

    delete ptr;//deallocate 
    cout<<"\nNumber is:"<<*ptr<<endl;

    return 0;
}
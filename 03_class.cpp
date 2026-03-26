#include<iostream>
using namespace std;

// user define data type which hold onw data member and member function
// to declare a class using class keyword

class student{
    //access specifire
    private:
        //data member
        int studentId;
        string studentName;
        float percentage;

    public:
        // member function
        void getData(){
            cout<<"Enter studentId:";
            cin>>studentId;

            cout<<"Enter studentName:";
            cin>>studentName;

            cout<<"Enter percentage:";
            cin>>percentage;
        }

        void printData(){
            cout<<"\n\n||-- STUDENT DATA --||"<<endl;
            cout<<"studentId:"<<studentId<<endl;
            cout<<"studentName:"<<studentName<<endl;
            cout<<"percentage:"<<percentage<<endl;
        }
    // protected:
};
int main(){

    // object - instant of class
    // use - to access class public data member and member function
    student s1,s2;

    s1.getData();
    s1.printData();

    s2.getData();
    s2.printData();
    return 0;
}
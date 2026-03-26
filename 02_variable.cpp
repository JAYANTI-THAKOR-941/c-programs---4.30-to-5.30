// Variable and Data Types

#include<iostream>
using namespace std;

int main(){
    int studentId;
    string studentName;
    float percentage;
    string grade;

    // typedef int number;
    // number a = 5;
    // number b = 10;

    cout<<"Enter studentId:";
    cin>>studentId;

    cout<<"Enter studentName:";
    cin>>studentName;

    cout<<"Enter percentage:";
    cin>>percentage;

    cout<<"Enter your grade:";
    cin>>grade;

    cout<<"\n\n||---== STUDENT INFO ==---||"<<endl;
    cout<<"studentId:"<<studentId<<endl;
    cout<<"studentName:"<<studentName<<endl;
    cout<<"percentage:"<<percentage<<endl;
    cout<<"grade:"<<grade<<endl;

    return 0;
}
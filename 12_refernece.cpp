#include<iostream>
using namespace std;

int main(){

    string student_name = "Aryan Prajapati";

    cout<<"student name : "<<student_name<<endl;

    string &s_name = student_name;
    cout<<"student name : "<<s_name<<endl;

    s_name = "Krish Tapodhan";
    cout<<"student name : "<<s_name<<endl;

    return 0;

}
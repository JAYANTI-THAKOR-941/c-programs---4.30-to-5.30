#include<iostream>
using namespace std;

class student{
    string name;
    float percentage;

    public:
        void getStudentInfo(){
            cout<<"Enter studentName:";
            getline(cin,name);
            cout<<"Enter percentage:";
            cin>>percentage;
        }
        void printInfo(){
            cout<<"StudentName:"<<endl;
            cout<<"percentage:"<<percentage<<endl;
        }
};

class faculty:public student{
    string facultyName;
    public:
        void getFaculty(){
            cout<<"Enter facultyName:";
            getline(cin,facultyName);
            getStudentInfo();
        }
        void fucaltyReport(){
            cout<<"Faculty Name:"<<facultyName<<endl;
            printInfo();
        }
};

class BranchManager:public faculty{
    string bmName;
    public:
        void getBM_Info(){
            cout<<"Enter BM Name:";
            getline(cin,bmName);
            getFaculty();
        }
        void displayReport(){
            cout<<"\n\n||--== REPORT ==--||"<<endl;
            cout<<"Branch Manager:"<<bmName<<endl;
            fucaltyReport();
        }
};

int main(){
    BranchManager b;
    b.getBM_Info();
    b.displayReport();
    return 0;
}
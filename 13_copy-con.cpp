#include<iostream>
using namespace std;

class Student {
    int studentId;
    string studentName;
    double percentage;

    public:
        Student(int id,string name,double per){
            studentId = id;
            studentName = name;
            percentage = per;
        }   
        Student(class Student &s){
            studentId = s.studentId + 1;
            studentName = s.studentName;
            percentage = s.percentage ;
        }   
        void displayInfo(){
            cout<<"\nstudentId:"<<studentId<<endl;
            cout<<"studentName:"<<studentName <<endl;
            cout<<"percentage:"<<percentage<<endl;
        }
};

int main(){
    Student s1(111,"Aryan",78.44);

    Student s2 = s1;

    s1.displayInfo();
    s2.displayInfo();
    return 0;
}
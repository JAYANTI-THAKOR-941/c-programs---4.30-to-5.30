#include<iostream>
using namespace std;

class Student{
    string studentName;
    
    public:
    static int count;
        Student(string name){
            studentName = name;
            count++;
        }

        void displayStudents(){
            cout<<"studentName:"<<studentName<<endl;
        }
};

int Student :: count = 0;

int main(){

    Student s1("Darshil");
    Student s2("Krish");
    Student s3("Alpesh");
    
    s1.displayStudents();
    s2.displayStudents();
    s3.displayStudents();

    cout<<"Total students :"<<Student::count<<endl;
    
    return 0;
}
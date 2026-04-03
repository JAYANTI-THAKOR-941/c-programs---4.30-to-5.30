#include<iostream>
using namespace std;


//base class 
class student{

    int studentId;
    string studentName;
    string courseName;

    public:
        void getStudent(){
            cout<<"Enter studentId:";
            cin>>studentId;
            cin.ignore();
            cout<<"Enter studentName:";
            getline(cin,studentName);
            cout<<"Enter courseName:";
            cin>>courseName;
        }

        void displayStudent(){
            cout<<"\n\n||-== STUDENT INFO ==-||"<<endl;
            cout<<"studentId:"<<studentId<<endl;
            cout<<"studentName:"<<studentName<<endl;
            cout<<"courseName:"<<courseName<<endl;
        }

};

// derived class
class faculty : public student {
    
    int facultyId;
    string facultyName;
    public:
        void getFaculty(){
            cout<<"Enter facultyId:";
            cin>>facultyId;
            cin.ignore();
            cout<<"Enter facultyName:";
            getline(cin,facultyName);
        }

        void displayFaculty(){
            cout<<"\n\n||-== Faculty INFO ==-||"<<endl;
            cout<<"facultyId:"<<facultyId<<endl;
            cout<<"facultyName:"<<facultyName<<endl;
        }

};

int main(){

    faculty f1;

    f1.getFaculty();
    f1.getStudent();
    
    f1.displayFaculty();
    f1.displayStudent();
    return 0;
}
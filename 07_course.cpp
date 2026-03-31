#include<iostream>
using namespace std;

class Course{
        int courseId;
        string courseName;
        float courseDuration;
        long int coursePrice;
        string courseFaculty;
    
    public:
        void getData(){
            cout<<"Enter courseId:";
            cin>>courseId;

            cin.ignore();
            cout<<"Enter course Name:";
            getline(cin,courseName);

            cout<<"Enter courseDuration:";
            cin>>courseDuration;

            cout<<"Enter coursePrice:";
            cin>>coursePrice;

            cin.ignore();
            cout<<"Enter Faculty Name:";
            getline(cin,courseFaculty);
        }

        void printData();
};


// class member function definition
void Course::printData(){
    cout<<"\n\n||-== COURSE INFORMATION ==-||"<<endl;
    cout<<"COURSE ID:"<<courseId<<endl;
    cout<<"COURSE NAME:"<<courseName<<endl;
    cout<<"COURSE PRICE:"<<coursePrice<<endl;
    cout<<"COURSE DURATION:"<<courseDuration<<" Months."<<endl;
    cout<<"COURSE FACULTY:"<<courseFaculty<<endl;
}

int main(){

    Course c1;
    c1.getData();
    c1.printData();
    return 0;
}
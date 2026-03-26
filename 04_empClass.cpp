#include<iostream>
#include<string>
using namespace std;

class Employee{

    int empId;
    string empName;
    float salary;
    string joiningDate;
    string department;

    public:
        void getEmployeeData(){
            cout<<"Enter empId:";
            cin>>empId;

            cout<<"Enter employeeName:";
            // getline(cin,empName);
            cin>>empName;

            cout<<"Enter salary:";
            cin>>salary;

            cout<<"Enter joiningDate:";
            cin>>joiningDate;

            cout<<"Enter department:";
            cin>>department;
            // getline(cin,department);
        }

        void printData(){
            cout<<"Employee Id:"<<empId<<endl;
            cout<<"Employee Name:"<<empName<<endl;
            cout<<"Employee salary:"<<salary<<endl;
            cout<<"Employee joining Date:"<<joiningDate<<endl;
            cout<<"Employee department:"<<department<<endl;
        }
    
        
};


int main(){

    Employee e[5];

    for(int i=0;i<5;i++){
        e[i].getEmployeeData();
    }
    for(int i=0;i<5;i++){
        cout<<"\n\n||--== Employee "<<i+1<<"==--||"<<endl;
        e[i].printData();
    }
    
    return 0;
}
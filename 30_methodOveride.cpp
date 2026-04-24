#include<iostream>
using namespace std;

class Admin{

    // private member
    string companyName;
    long int totalRevenue;

    protected:
        long int managerSalary;
        int totalStaff;
    
    public:
        long int employeeSalary;
        bool can_terminate;

        Admin(){
            companyName = "Red & White Skill Education";
            totalRevenue = 7000000;
            managerSalary = 45000;
            totalStaff = 12;
            employeeSalary = 36000;
            can_terminate = true;
        }

        void showPrivateData(){
            cout<<"Company Name:"<<companyName<<endl;
            cout<<"Total Revenue:"<<totalRevenue<<endl;
        }

        virtual void myAccess(){
            cout<<"\nAdmin Details"<<endl;
            showPrivateData();
            cout<<"Manager Salary"<<managerSalary<<endl;
            cout<<"Total Staff"<<totalStaff<<endl;
            cout<<"Employee Salary:"<<employeeSalary<<endl;
            cout<<"Can Terminate:"<<can_terminate<<endl;
        }
};

class Manager:public Admin{
    public:
        void myAccess() override{
            showPrivateData();
            cout<<"Manager Salary"<<managerSalary<<endl;
            cout<<"Total Staff"<<totalStaff<<endl;
            cout<<"Employee Salary:"<<employeeSalary<<endl;
            cout<<"Can Terminate:"<<can_terminate<<endl;
        }
};

class Emloyee:public Manager{
     public:
        void myAccess() override{
            showPrivateData();
            cout<<"Manager Salary"<<managerSalary<<endl;
            cout<<"Total Staff"<<totalStaff<<endl;
            cout<<"Employee Salary:"<<employeeSalary<<endl;
            cout<<"Can Terminate:"<<can_terminate<<endl;
        }
};
int main(){

    Admin a;
    a.myAccess();

    Manager m;
    m.myAccess();

    Emloyee e;
    e.myAccess();
    return 0;
}
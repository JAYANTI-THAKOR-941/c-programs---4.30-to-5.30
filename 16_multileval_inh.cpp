// Multileval Inheritance in C++

#include<iostream>
using namespace std;

class Employee{
    int empId;
    string empName; 
    int completedTask;
    int pendingTask;

    public:
        void getEployee(int id,string name,int c_task,int p_task){
            empId = id;
            empName = name;
            completedTask = c_task;
            pendingTask = p_task;
        }

        void employeeReport(){
            cout<<"\n||--== EMPLOYEE REPORT ==--||"<<endl;
            cout<<"Employee Id:"<<empId<<endl;
            cout<<"Employee Name:"<<empName<<endl;
            cout<<"Completed Task:"<<completedTask<<endl;
            cout<<"Pending Task:"<<pendingTask<<endl;
        }
};
class Manager:public Employee{
    int managerId;
    string managerName;

    public:
        void getManager(int id,string m_name){
            managerId = id;
            managerName = m_name;
        }

        void managerInfo(){
            cout<<"\nManager Id:"<<managerId<<endl;
            cout<<"\nManager Name:"<<managerName<<endl;
        }

};
class CEO : public Manager{
    string CEO_Name;
    public:
        void getCEO(string c_name){
            CEO_Name = c_name;
        }
        void CEO_Info(){
            cout<<"CEO Name:"<<CEO_Name<<endl;
        }
};


int main(){
    CEO c;
    c.getCEO("Alpesh Thakor");
    c.getManager(111,"Vaishali Kaprupura");
    c.getEployee(101,"Jayanti Thakor",15,5);

    c.CEO_Info();
    c.managerInfo();
    c.employeeReport();

    return 0;
}
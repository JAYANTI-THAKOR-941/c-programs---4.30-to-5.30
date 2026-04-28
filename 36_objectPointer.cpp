#include<iostream>
using namespace std;

class Employee{
    string EmplpoyeeId;
    string EmployeeName;

    public:
        Employee(string id,string name = "Jayanti Thakor"){
            EmplpoyeeId = id;
            EmployeeName = name;
        }

        void display(){
            cout<<"EmployeeId:"<<EmplpoyeeId<<endl;
            cout<<"EmployeeName:"<<EmployeeName<<endl;
        }
};

int main(){

    Employee e("Emp-111");
    Employee e2("Emp-111","Krish Tapodhan");

    Employee *p1 = &e;
    Employee *p2 = &e2;

    p1->display();
    p2->display();

    return 0;
}
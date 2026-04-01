// Static member in c++

#include<iostream>
using namespace std;

class BankAccount{

    string accountNo;
    string customerName;
    double accountBalance;

    static int totalAccount;
    static int totalBalance;

    public:
        void createAccount(string accNo,string cs_name,double balance){
            accountNo = accNo;
            customerName = cs_name;
            accountBalance = balance;

            totalAccount++;
            totalBalance += accountBalance;
        }

        void displayAccount(){
            cout<<"\n\nCustomer Name:"<<customerName<<endl;
            cout<<"Account No:"<<accountNo<<endl;
            cout<<"Account Balance:"<<accountBalance<<endl;
        }

        static void BankReport(){
           cout<<"\n\n||--== BANK REPORT ==--||"<<endl;
           cout<<"Total Account:"<<totalAccount<<endl;
           cout<<"Total Balance:"<<totalBalance<<endl;

        }

};

int BankAccount :: totalAccount = 0;
int BankAccount :: totalBalance = 10000;


int main(){

    BankAccount b1,b2,b3;
    b1.createAccount("72500100001872","Jayanti Thakor",4500);
    b2.createAccount("72500100001871","Krish Tapodhan",5000);
    b3.createAccount("72500100001870","Akash",15000);

    b1.displayAccount();
    b2.displayAccount();
    b3.displayAccount();

    BankAccount::BankReport();

    return 0;
}
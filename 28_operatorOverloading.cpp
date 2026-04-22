#include<iostream>
using namespace std;

class BankAccount{
    int balance;
    public:
        BankAccount(int b){
            balance = b;
        }

        void operator ++(){
            balance += 1000;
        }

        void displayBalance(){
            cout<<"\nAccount Balance:"<<balance<<endl;
        }
};

int main(){

    BankAccount b1(5000);
    b1.displayBalance();

    ++b1;
    b1.displayBalance();
    return 0;
}
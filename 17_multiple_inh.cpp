// Multiple Inheritance
#include<iostream>
using namespace std;

class authUser{
    string userName;
    public:
        void loginUser(string user){
            userName = user;
            cout<<userName<<" Login successfully.!!";
        }
};

class payment{
    int amount;
    public:
        void setAmount(int amt){
            amount = amt;
        }
};
// multiple inheritance
class onlinePayment:public authUser,public payment{
    public:
        void paymentMsg(string username,int amt){
            loginUser(username);
            setAmount(amt);
            cout<<endl<<amt<<" Payment successfully.!!";
        }
};

int main(){
    onlinePayment o;
    o.paymentMsg("Jayanti Thakor",5000);
}
#include<iostream>
using namespace std;

class User{
    protected:
        string name;
    public: 
        void getUser(string username){
            name = username;
        }
};
class Buyer:public User{
    protected:
        int qty;
    public:
        void getBuyer(int q){
            qty = q;
        }
};

class Seller{
    protected:
        int price;
    public:
        void getSeller(int p){
            price = p;
        }
};

class FinalClass:public Buyer,public Seller{
    public:
        void displayOrderInfo(){
            int total = price * qty;
            cout<<"\n\n||==== -- ORDER INFO -- ====||"<<endl;
            cout<<"CUSTOMER NAME : "<<Buyer::name<<endl;
            cout<<"Total Qty:"<<qty<<endl;
            cout<<"Price : "<<price<<endl;
            cout<<"Total Price:"<<total<<endl;
        }

};

int main(){

    FinalClass f;
    f.Buyer::getUser("Jayanti Thakor");
    f.getBuyer(3);
    f.getSeller(500);
    f.displayOrderInfo();

    return 0;
}
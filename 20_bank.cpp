#include<iostream>
using namespace std;

class RBI{
    public:
        void interest_rate(){
            cout<<"Interest Rate : 8%"<<endl;
        }
};
class BOB:public RBI{
    public:
        void bankOfBaroda(){
            cout<<"\nBank of Baroda"<<endl;
            interest_rate();
        }
};
class HDFC:public RBI{
    public:
        void HDFC_Bank(){
            cout<<"\nWelcome to HDFC Bank."<<endl;
            interest_rate();
        }
};
class SBI : public RBI{
    public:
        void SBI_Bank(){
             cout<<"\nState Bank of India."<<endl;
            interest_rate();
        }
};

int main(){

    BOB b;
    b.bankOfBaroda();

    HDFC h;
    h.HDFC_Bank();

    SBI s;
    s.SBI_Bank();
    return 0;
}
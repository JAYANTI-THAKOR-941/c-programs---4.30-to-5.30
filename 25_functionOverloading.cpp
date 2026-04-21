#include<iostream>
using namespace std;

class authSystem{
    public:
        void login(string email,string password){
            cout<<"Login with Email & Password."<<endl;
        }

        void login(string mobileNo,long int otp){
            cout<<"Login with mobile and otp"<<endl;
        }
};
int main(){

    authSystem a;

    // a.login("techskillhub@support.com","123@pipl");
    a.login("8160041921",452266);
    return 0;
}
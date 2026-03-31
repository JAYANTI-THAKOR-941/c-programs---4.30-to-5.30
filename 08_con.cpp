#include<iostream>
using namespace std;

class rwgn1{

    int rwgn_code;
    string name;
    string location;

    public:
        rwgn1(){
            cout<<"Enter code:";
            cin>>rwgn_code;

            cin.ignore();
            cout<<"Enter branch name:";
            getline(cin,name);

            cout<<"Enter location:";
            cin>>location;            
        }

        void printBranchData(){
            cout<<"||-== -- BRANCH INFO --==-||"<<endl;
            cout<<"Branch Code:"<<rwgn_code<<endl;
            cout<<"Branch Name:"<<name<<endl;
            cout<<"Branch Location:"<<location;
        }

        ~rwgn1(){
            cout<<"\n\nObject destroyed.!!"<<endl;
        }
};
int main(){

    rwgn1 i;
    i.printBranchData();
    return 0;
}
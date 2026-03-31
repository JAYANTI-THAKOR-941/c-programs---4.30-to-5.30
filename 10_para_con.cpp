#include<iostream>
using namespace std;

class CafeInfo{
    int cafeId;
    string cafeName;
    string cafeLocation;

    public:
        CafeInfo(int cafeId,string cafeName,string cafeLocation){
            this->cafeId = cafeId;
            this->cafeName = cafeName;
            this->cafeLocation = cafeLocation;
        }

        void displayCafeInfo(){
            cout<<"\nCafe Id:"<<cafeId<<endl;
            cout<<"Cafe Name:"<<cafeName<<endl;
            cout<<"Cafe Location:"<<cafeLocation<<endl;
        }
};

int main(){

    CafeInfo c(1,"Shivas","Gandhinagar");
    CafeInfo c2(2,"KK","Gandhinagar");
    c.displayCafeInfo();
    c2.displayCafeInfo();
    return 0;
}
#include<iostream>
using namespace std;

class Array{
    int *arr;
    int size;
    public:
        Array(int n){
           size = n;
           arr = new int[n];
           cout<<size<<" Number of byties memory accolocated."<<endl;
        }

        void addElement(){
            for(int i=0;i<size;i++){
                cout<<"Enter element:";
                cin>>arr[i];
            }
        }

        void displayElement(){
            cout<<"\nAll Element\n";
            for(int i=0;i<size;i++){
                cout<<arr[i]<<"|";
            }
            cout<<endl;
        }

        ~Array(){
            delete [] arr;
            cout<<"Memory deallocated successfully";
        }

};
int main(){

    Array obj(10);
    obj.addElement();
    obj.displayElement();
    return 0;
}
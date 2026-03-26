#include<iostream>
using namespace std;
class student{
    private:
          int stuntId;
          string studentName;
     
    
public:
    string greetmsg;

    void getstudantdata(){
    
    cout<<"Enter a id:";
    cin>>stuntId;
    cout<<"Enter student name:";
    cin>>studentName;
    }

};
int main(){
    
    student s1;
      s1.getstudantdata();
      s1.greetmsg = "hello";
      cout<<s1.greetmsg<<endl;
    return 0;
}



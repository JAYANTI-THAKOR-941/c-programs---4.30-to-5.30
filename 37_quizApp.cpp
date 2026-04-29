#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Question{
    public:
        virtual void display(int qNo) = 0;
        virtual bool checkAnswer(int ans) = 0;
        virtual ~Question(){};
};

class MCQQuestion:public Question{
    private:
        string question;
        string options[4];
        int correct;
    public:
        bool load(ifstream &file){
            if(!getline(file,question))return false;
            if(question.empty()){
                if(!getline(file,question))return false;
            }
            
            for(int i=0;i<4;i++){
                if(!getline(file,options[i])) return false;
            }

            string correctStr;

            if(!getline(file,correctStr)) return false;

            correct = stoi(correctStr);

            return true;
        }

        void display(int qNo) override{
            cout<<"\n\n||-------------------------------------||\n";
            cout<<"Q"<<qNo<<"."<<question<<endl;
            cout<<"-------------------------------------------\n";
            for(int i=0;i<4;i++){
                cout<<"\t"<<i+1<<options[i]<<endl;
            }
        }

        bool checkAnswer(int ans) override{
            return ans == correct;
        }

        int getCorrect(){
            return correct;
        }
};

int main(){
    MCQQuestion m;
    return 0;
}
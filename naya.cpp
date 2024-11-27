#include<iostream>
using namespace std;
class GenerateRollNumber{
    private:
    string name;
    int rollnumber;
    int count;
    
    public:
    GenerateRollNumber(string name,int students){
        this->count=1;
        while(count>=students){
        this->name=name;
        this->rollnumber=1001;
        ++rollnumber;
        count++;
        }
    };
    void display(int students){
        this->count=1;
        while(count<=students){
cout<<name<<endl;
cout<<"23P-"<<rollnumber<<endl;
count++;
        }
    };

};
int main(){
    string name, rollnumber;
    int count=1,students;
    cout<<"enter total number of students"<<endl;
    cin>>students;
    while(count<=students){
    cout<<"enter your name"<<endl;
    cin>>name;
    count++;
    }
GenerateRollNumber obj(name,students);
obj.display(students);
    return 0;
}
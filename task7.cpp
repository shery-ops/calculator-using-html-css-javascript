#include <iostream>
using namespace std;
class salarydata{
    private:
    double grade1=250000,grade2=200000,grade3=150000,grade4=100000,grade5=50000;

};

class calculatededuction: public salarydata{
    protected:
    int no_of_off_days=2,shortleavehrs=15,employeenoofoffdays,employeenoofhrs;

    public:
    calculatededuction(){

    }
    int calculatesalarydeduction(){

    }

}; 

class finalsalary: public calculatededuction{
    private:
    string name;
    int employeeid;
    int grade,offdays,shortleavehr;
    float salary;

public:
finalsalary(){

}
void setsalary(){

}


};

int main(){
finalsalary obj;
    return 0;
}
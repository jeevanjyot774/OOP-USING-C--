#include<iostream>
using namespace std;
class Employee{
    protected:
    int id;
    float salary;
    public:
    void getEmployeeData(){
        cout<<"Enter Employee ID:"<<endl;
        cin>>id;
        cout<<"Enter Employee Salary:"<<endl;
        cin>>salary;
    }
    void showEmployee(){
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};
class Manager : public Employee{
    public:
    void getManagerData(){
        getEmployeeData();
    }
    void showManager(){
        showEmployee();
    }
};
int main(){
    Manager m1;
    m1.getManagerData();
    m1.showManager();
    return 0;
}
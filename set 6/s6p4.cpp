#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    void getPersonData(){
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter age:"<<endl;
        cin>>age;
    }
    void showPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Employee :public Person{
    protected:
    int id;
    public:
    void getEmployeeData(){
        getPersonData();
        cout<<"Enter Employee ID:"<<endl;
        cin>>id;
    }
    void showEmployee(){
        showPerson();
        cout<<"Employee ID: "<<id<<endl;
    }
};
class Manager :public Employee{
    protected:
    string department;
    public:
    void getManagerData(){
        getEmployeeData();
        cout<<"Enter Department:"<<endl;
        cin>>department;
    }
    void showManager(){
        showEmployee();
        cout<<"Department: "<<department<<endl;
    }
};
int main(){
    Manager m1;
    m1.getManagerData();
    m1.showManager();
    return 0;
}
#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    float basicSalary;
    float hra, da, netSalary;
    public:
   Employee(){
        id=0;
        name="";
        basicSalary=0;
        hra=0;
        da=0;
        netSalary=0;
   }
   Employee(int i, string n, float b, float h, float d){
        id=i;
        name=n;
        basicSalary=b;
        hra=h;
        da=d;
        netSalary=basicSalary+hra+da;
   }
   void getData(){
        cout<<"Enter Employee ID: ";
        cin>>id;
        cout<<"Enter Employee Name: ";
        cin>>name;
        cout<<"Enter Basic Salary: ";
        cin>>basicSalary;
        cout<<"Enter HRA: ";
        cin>>hra;   
        cout<<"Enter DA: ";
        cin>>da;
        netSalary=basicSalary+hra+da;
   }
   void displayData(){
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Basic Salary: "<<basicSalary<<endl;
        cout<<"HRA: "<<hra<<endl;
        cout<<"DA: "<<da<<endl;
        cout<<"Net salary: "<<netSalary<<endl;
   }
    float totalSalary(){
          return netSalary;
    }
};
int main(){
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    Employee empArr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details of employee "<<i+1<<":"<<endl;
        empArr[i].getData();
    }
    for(int i=0;i<n;i++){
        cout<<"Details of employee "<<i+1<<":"<<endl;
        cout<<"Employee with salary greater than 50000:"<<endl;
        if(empArr[i].totalSalary()>50000)
        {
            empArr[i].displayData();
        }
    }
    return 0;
}

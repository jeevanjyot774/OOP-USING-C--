#include<iostream>
using namespace std;
class Student{
    int rollNo;
    string name;
    float marks[5];
    float total;
    public:
    void getData(){
        cout<<"Enter Roll No: ";
        cin>>rollNo;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Marks of 5 subjects: ";
        total=0;
        for(int i=0;i<5;i++){
            cin>>marks[i];
            total+=marks[i];
        }
    }
    void displayData(){
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: ";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        cout<<"Total Marks: "<<total<<endl;
    }
    float getTotal(){
        return total;
    }
};
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student stArr[n];
    Student s1=stArr[0];
    for(int i=0;i<n;i++){
        cout<<"Enter details of student "<<i+1<<":"<<endl;
        stArr[i].getData();
        if(stArr[i].getTotal()>s1.getTotal()){
            s1=stArr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<"Details of student "<<i+1<<":"<<endl;
        stArr[i].displayData();
    }
        cout<<"Topper:"<<endl;
        s1.displayData();
    return 0;
}
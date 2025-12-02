#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    void setName(string n){
        name=n;
    }
    void displayName(){
        cout<<"Name: "<<name<<endl;
    }
};
class Teacher: virtual public Person{
    public:
    string subject;
    void setSubject(string s){
        subject=s;
    }
    void displaySubject(){
        displayName();
        cout<<"Subject: "<<subject<<endl;
    }
};
class Student: virtual public Person{
    public:
    int rollNo;
    void setRollNo(int r){
        rollNo=r;
    }
    void displayRollNo(){
        displayName();
        cout<<"Roll No: "<<rollNo<<endl;
    }
};
class TA: public Teacher, public Student{
    public:
    void display(){
        displaySubject();
        cout<<"Roll No: "<<rollNo<<endl;
    }
};
int main(){
    TA ta;
    ta.setName("Anshuman");
    ta.setSubject("C++");
    ta.setRollNo(31);
    cout<<"TA Details:"<<endl;
    ta.display();
    return 0;
}
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
class Student :public Person{
    public:
    string course;
    void getStudentData(){
        getPersonData();
        cout<<"Enter course:"<<endl;
        cin>>course;
    }
    void showStudent(){
        showPerson();
        cout<<"Course: "<<course<<endl;
    }
};
int main(){
    Student s1;
    s1.getStudentData();
    s1.showStudent();
    return 0;
}
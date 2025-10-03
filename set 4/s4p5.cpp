#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    float marks;
    Student(string n,float m)
    {
        name=n;
        marks=m;
    }
    void Display()
    {
        cout<<"name="<<name<<endl;
        cout<<"marks="<<marks<<endl;
    }
};
Student compare(const Student &s1, const Student &s2) {
    if (s1.marks > s2.marks)
        return s1;
    else
        return s2;
}
int main()
{
    Student s1("Amber", 85.5);
    Student s2("Bo", 90.0);
    cout<<"Student 1:"<<endl;
    s1.Display();
    cout<<"Student 2:"<<endl;
    s2.Display();
    Student topper = compare(s1, s2);
    cout<<"Top student:"<<endl;
    topper.Display();
    return 0;
}
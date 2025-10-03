#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollno;
    string name;
    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1,s2;
    s1.rollno = 1;
    s1.name="Jonathan";
    s2.rollno = 2;
    s2.name="Greg";
    s1.display();
    s2.display();
    return 0;
}
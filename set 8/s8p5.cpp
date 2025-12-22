#include <iostream>
#include <fstream>
using namespace std;
class Student {
public:
    int roll;
    char name[20];
    float marks;
};
int main() {
    int n;
    cin>>n;
    Student s;
    ofstream outFile("log.txt", ios::binary);
    for (int i = 0; i < n; i++) {
        cin>>s.roll>>s.name>>s.marks;
        outFile.write((char*)&s, sizeof(s));
    }
    outFile.close();
    ifstream inFile("data/s8-p5.dat", ios::binary);
    while (inFile.read((char*)&s, sizeof(s))) {
        cout<<s.roll<<" "<<s.name<<" "<<s.marks<<endl;
    }

    inFile.close();
    return 0;
}
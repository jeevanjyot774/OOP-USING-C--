#include<iostream>
using namespace std;
class Teacher{
    protected:
    string subject;
    public:
    void setSubject(string s){
        subject = s;
    }
    void displaySubject(){
        cout<<"Subject: "<<subject<<endl;
    }
};
class Researcher{
    protected:
    string area_of_research;
    public:
    void setResearchArea(string r){
        area_of_research = r;
    }
    void displayResearchArea(){
        cout<<"Area of Research: "<<area_of_research<<endl;
    }
};
class TeachingAssistant : public Teacher, public Researcher{
    public:
    void displayDetails(){
        displaySubject();
        displayResearchArea();
    }
};
int main(){
    TeachingAssistant ta;
    ta.setSubject("Computer Science");
    ta.setResearchArea("Artificial Intelligence");
    ta.displayDetails();
    return 0;
}
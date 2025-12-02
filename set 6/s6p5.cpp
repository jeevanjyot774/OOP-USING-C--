#include<iostream>
using namespace std;
class Shape{
    public:
    void Area(){
        cout<<"Calculating area of Shape"<<endl;
    }
};
class Circle : public Shape{
    protected:
    float radius;
    public:
    void inputCircle(){
        cout<<"Enter radius of Circle: ";
        cin>>radius;
    }
    void Area(){
        cout<<"Area of Circle: "<<3.14*radius*radius<<endl;
    }
};
class Rectangle : public Shape{
    protected:
    int length, breadth;
    public:
    void inputRectangle(){
        cout<<"Enter length and breadth of Rectangle: ";
        cin>>length>>breadth;
    }
    void Area(){
        cout<<"Area of Rectangle: "<<length*breadth<<endl;
    }
};
int main(){
    Circle c1;
    Rectangle r1;
    c1.inputCircle();
    c1.Area();
    r1.inputRectangle();
    r1.Area();
    return 0;
}
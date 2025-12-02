#include<iostream>
using namespace std;
class Shape{
    public:
    virtual int area()=0;
};
class Rectangle: public Shape{
    int length, breadth;
    public:
    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    int area() override{
        cout<<"Area of Rectangle: "<<length*breadth<<endl;
    }
};
class Circle: public Shape{
    int radius;
    public:
    Circle(int r){
        radius=r;
    }
    int area() override{
        cout<<"Area of Circle: "<<3.14*radius*radius<<endl;
    }
};
class Triangle: public Shape{
    int base, height;
    public:
    Triangle(int b, int h){
        base=b;
        height=h;
    }
    int area() override{
        cout<<"Area of Triangle: "<<0.5*base*height<<endl;
    }
};
int main(){
    Shape* s[3];
    s[0] = new Rectangle(10, 5);
    s[1] = new Circle(7);
    s[2] = new Triangle(6, 4);
    for(int i=0;i<3;i++){
        s[i]->area();
    }
}
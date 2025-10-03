#include<iostream>
using namespace std;
class Time{
    public:
    int hours;
    int minutes;
    Time(int h,int m){
        hours=h;
        minutes=m;
    }
    void display(){
        cout<<"Time: "<<hours<<" hrs "<<minutes<<" min"<<endl;
    }
    void addTime(Time &t)
    {
        hours += t.hours;
        minutes += t.minutes;
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }
};
int main(){
    Time t1(3,16);
    Time t2(4,56);
    t1.addTime(t2);
    t1.display();
    return 0;
}

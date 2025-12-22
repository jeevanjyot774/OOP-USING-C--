#include<iostream>
using namespace std;
template<class T>
class MinMax{
    T a, b;
public:
    MinMax(T x, T y){
        a = x;
        b = y;
    }
    void display(){
        if(a < b)
            cout << "Min: " << a << " Max: " << b << endl;
        else
            cout << "Min: " << b << " Max: " << a << endl;
    }
};
int main(){
    MinMax<int>mm(10, 20);
    mm.display();
    return 0;
}
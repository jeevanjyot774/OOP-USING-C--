#include<iostream>
using namespace std;
template<class T>
class stringBox{
    T a;
public:
    void set(T s){
        a=s;
    }
    void get(){
        cout<<a<<endl;
    }
};
int main(){
    stringBox<string>sb;
    sb.set("Hello");
    sb.get();
    return 0;
}
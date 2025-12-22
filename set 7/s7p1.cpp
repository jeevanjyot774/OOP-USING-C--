#include<iostream>
using namespace std;
template<class T>
T printTwo(T a, T b){
    cout<<a<<" "<<b<<endl;
}
int main(){
    printTwo<int>(2,4);
    return 0;
}
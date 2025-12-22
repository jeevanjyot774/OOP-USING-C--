#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
        if(b==0){
            cout<<"Error"<<endl;
    }
        else{
            cout<<"Result: "<<a/b<<endl;
        }
        return 0;
    }
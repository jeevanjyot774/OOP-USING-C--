#include<iostream>
using namespace std;
template<class T>
T sumArray(T arr[], int n){
    T sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<sumArray<int>(arr,5);
    return 0;
}
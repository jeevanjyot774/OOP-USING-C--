#include<iostream>
using namespace std;
template<class T>
T scaleVector(T arr[], int n, T f){
    for(int i=0; i<n; i++){
        arr[i] = arr[i]*f;
    }
    return arr[n];
}
int main(){
    int arr[]={1,2,3,4,5};
    scaleVector<int>(arr,5,3);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }  
    return 0;
}

    
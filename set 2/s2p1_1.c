#include<stdio.h>
int maximum(int *arr, int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(*(arr+i)>max){
            max=*(arr+i);
        }
    }
    return max;
}
int main(){
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }
        int z= maximum(arr, n);
        printf("The maximum element is: %d", z);
    return 0;
}
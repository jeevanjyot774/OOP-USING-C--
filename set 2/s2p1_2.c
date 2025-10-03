#include<stdio.h>
int minimum(int *arr, int n){
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(*(arr+i)<min){
            min=*(arr+i);
        }
    }
    return min;
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
        int z= minimum(arr, n);
        printf("The minimum element is: %d", z);
    return 0;
}
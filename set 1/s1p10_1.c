<<<<<<< HEAD
#include<stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int (*p)[5]= &arr; 
    for(int i = 0; i < 5; i++) {
        printf("%d ", (*p)[i]);
    }
    return 0;
=======
#include<stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int (*p)[5]= &arr; 
    for(int i = 0; i < 5; i++) {
        printf("%d ", (*p)[i]);
    }
    return 0;
>>>>>>> 57ddf501141f53ff91cfd5681046bbc09f1524a6
}
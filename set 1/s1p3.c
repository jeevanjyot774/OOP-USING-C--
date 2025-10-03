<<<<<<< HEAD
#include<stdio.h>

void increment(int *p)
{
    (*p)++;
}
int main(){
    int x = 5;
    printf("Before increment: x = %d\n", x);
    increment(&x);
    printf("After increment: x = %d\n", x);
    return 0;
=======
#include<stdio.h>

void increment(int *p)
{
    (*p)++;
}
int main(){
    int x = 5;
    printf("Before increment: x = %d\n", x);
    increment(&x);
    printf("After increment: x = %d\n", x);
    return 0;
>>>>>>> 57ddf501141f53ff91cfd5681046bbc09f1524a6
}
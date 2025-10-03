<<<<<<< HEAD
#include<stdio.h>

 int max(int *a, int *b, int *c){
    if (*a > *b && *a > *c)
        return *a;
    else if (*b > *a && *b > *c)
        return *b;
    else
        return *c;
 }
int main(){
    int x, y, z;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    max(&x, &y, &z);
    printf("The maximum of x, y, and z is: %d\n", max(&x, &y, &z));
    return 0;
=======
#include<stdio.h>

 int max(int *a, int *b, int *c){
    if (*a > *b && *a > *c)
        return *a;
    else if (*b > *a && *b > *c)
        return *b;
    else
        return *c;
 }
int main(){
    int x, y, z;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    max(&x, &y, &z);
    printf("The maximum of x, y, and z is: %d\n", max(&x, &y, &z));
    return 0;
>>>>>>> 57ddf501141f53ff91cfd5681046bbc09f1524a6
}
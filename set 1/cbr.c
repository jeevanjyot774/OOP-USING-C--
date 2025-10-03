<<<<<<< Updated upstream
#include<stdio.h>

void inc5(int *a)
{
    *a = *a + 5;
}

int main(){
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    inc5(&a);
    printf("The new value of a is %d\n", a);
    return 0;
}

=======
#include<stdio.h>

void inc5(int *a)
{
    *a = *a + 5;
}

int main(){
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    inc5(&a);
    printf("The new value of a is %d\n", a);
    return 0;
}

>>>>>>> Stashed changes

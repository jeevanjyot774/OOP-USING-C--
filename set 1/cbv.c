<<<<<<< Updated upstream
#include<stdio.h>

int incr5(int );

int incr5(int a)
{
    a = a + 5;
    return a;
}

int main()
{
    int a;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    a = incr5(a);
    printf("The value of a after incr5 is %d \n", a);
    return 0;
=======
#include<stdio.h>

int incr5(int );

int incr5(int a)
{
    a = a + 5;
    return a;
}

int main()
{
    int a;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    a = incr5(a);
    printf("The value of a after incr5 is %d \n", a);
    return 0;
>>>>>>> Stashed changes
}
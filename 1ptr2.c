#include<stdio.h>

int main()
{
    int a = 3;
    printf("The address of a is %u\n", &a);
    printf("The value of a is %d", *(&a));
    return 0;
}
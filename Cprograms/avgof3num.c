#include<stdio.h>
int main()
{
    int a , b , c;
    printf("enter the value of a :\n");
    scanf("%d", &a);
    printf("enter the value of b :\n");
    scanf("%d", &b);
    printf("enter the value of c :\n");
    scanf("%d", &c);
    printf("The avg of three num is : %d", (a + b + c) / 3);
    return 0;
}
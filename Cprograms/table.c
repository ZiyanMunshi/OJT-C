#include<stdio.h>

int main()
{
    int n;
    printf("Enter the Number Of which you want Table:");
    scanf("%d", &n);
    printf("Table of %d \n",n);
    for (int i = 1;i<=10; ++i)
    {
       
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
    return 0;
}

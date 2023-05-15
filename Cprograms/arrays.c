#include<stdio.h>
#include<conio.h>
int main()
{
    /* code */
    int marks[5];
    printf("Enter Marks of Maths:\n");
    scanf("%d", &marks[0]);
    printf("Enter Marks of Science:\n");
    scanf("%d", &marks[1]);
    printf("Enter Marks of English:\n");
    scanf("%d", &marks[2]);
    printf("Enter Marks of Computer:\n");
    scanf("%d", &marks[3]);
    printf("Enter Marks of Social Science:\n");
    scanf("%d", &marks[4]);
    printf("Average Marks:%d", (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5);
    return 0;
}

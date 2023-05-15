#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks :- \n");
    scanf("%d" ,& marks);
    if (marks <= 100 && marks>90)
    {
        printf("A++\n");
        printf("Excellent performance \n ");
    }
    else if(marks <= 90 && marks > 80)
    {
        printf("A+\n");
        printf("Very Good Performance \n");
    }
    else if (marks <= 80 && marks > 70)
    {
        printf("A\n");
        printf(" Good Performance \n");
    }
     else if (marks <= 70 && marks > 60)
    {
        printf("B++\n");
        printf("Good but i was expecting more \n");
    }
     else if (marks <= 60 && marks > 50)
    {
        printf("B+\n");
        printf("Can do better \n");
    }
     else if (marks <= 50 && marks > 40)
    {
        printf("B \n");
        printf("Average performance \n can do better");
    }
     else if (marks <= 40 && marks > 30)
    {
        printf("C \n");
        printf("Needs Improvement \n");
    }
    else if (marks <=30 && marks > 0)
    {
        printf("Fail \n");
        printf("Needs More improvement and should focus on studies .\n");
    }
    else if(marks > 100)
    {
	
    	printf("Please Enter Valid Marks\n");
}
    printf("Thank you");
    return 0;
}

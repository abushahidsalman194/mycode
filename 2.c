#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);

    if(marks>=80)
        printf("A+");

   else if(marks>=70)
        printf("A");

    else if("marks>=60")
        printf("A-");

    else
    printf("Fail");

    return 0;
}

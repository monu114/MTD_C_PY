#include<stdio.h>

int main()
{
    int averageScore=0;
    puts("Enter the average Score of the student to print the result:- ");
    scanf("%d",&averageScore);
    if(averageScore>=0 && averageScore<=49)
        printf("result is fail");
    else if(averageScore<=70)
        printf("result is second class");
    else if(averageScore<=90)
        printf("result is first class"); 
    else if(averageScore<=100)
        printf("result is first class");
    else
        printf("invaild score");     
}
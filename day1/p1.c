//Accept the number from the user and chek if it is Even.
#include<stdio.h>
int main()
{
    int intNum=0;
    puts("Enter the number to be checked:- ");
    int returnvalue= scanf("%d", &intNum);
    if(intNum%2==0)
        printf("%d is Even number", intNum);
    else
        printf("%d is not an Even number", intNum);
    return 0;
}

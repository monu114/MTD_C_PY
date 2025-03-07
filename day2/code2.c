#include<stdio.h>
#include<math.h>
int main()
{
    int inputNum=0;
    puts("enter the number to check:- ");
    scanf("%d",&inputNum);
    int root =floor(sqrt(inputNum));
    if(root*root==inputNum)
        printf("%d id the perfect square",inputNum);
    else   
        printf("%d is not the perfect square",inputNum);
}
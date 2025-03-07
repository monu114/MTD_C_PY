#include <stdio.h>

int main() 
{
    int inputNumber;
    puts("Enter a number to print its Multiplication table: ");
    scanf("%d", &inputNumber);
    printf("Multiplication table of %d:\n", inputNumber);
    for (int i = 1; i <= 20; i++)
     {
        printf("%d x %2d = %3d\n", inputNumber, i, inputNumber * i);
     }

}
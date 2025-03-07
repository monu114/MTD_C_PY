#include <stdio.h>

int main() {
    int num;
    puts("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) {  
        int sum = 0;
        while (num > 0) {
            sum += num % 10; 
            num /= 10;       
        }
        num = sum; 
    }
    printf("single digit: %d\n", num);
    return 0;
}

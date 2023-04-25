//summation of the given number
#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    printf("The summation of number is: %d", sum);
    
    return 0;
}


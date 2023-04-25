//sum of First and Last digit
#include <stdio.h>

int main() {
    int num, first, last, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    first = num;
    while(first >= 10) {
        first /= 10;
    }
    
    last = num % 10;
    
    sum = first + last;
    
    printf("The sum of first and last digit is: %d", sum);
    
    return 0;
}


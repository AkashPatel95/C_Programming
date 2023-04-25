//factorial
#include <stdio.h>

int main() {
    int i,num, factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(i = num; i >= 1; i--) {
        factorial = factorial * i;
    }
    
    printf("Factorial of %d is %d\n", num, factorial);
    
    return 0;
}


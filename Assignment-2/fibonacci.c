//fibonacci series
#include <stdio.h>

int main() {
    int num, fib1 = 0, fib2 = 1, nextFib = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Fibonacci series up to %d:\n", num);
    
    while(nextFib <= num) {
        printf("%d ", nextFib);
        fib1 = fib2;
        fib2 = nextFib;
        nextFib = fib1 + fib2;
    }
    
    return 0;
}


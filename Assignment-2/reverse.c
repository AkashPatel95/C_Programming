//print number in reverse order
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Number in reverse order: ");
    
    while(num != 0) {
        printf("%d", num % 10);
        num /= 10;
    }
    
    return 0;
}


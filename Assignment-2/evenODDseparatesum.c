#include <stdio.h>
/*take 10 numbers as input and find out:
1.how many even and odd numbers
2.sum of even and odd numbers*/
int main() {
    int i,num, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;
    
    printf("Enter 10 numbers: ");
    
    for(i = 1; i <= 10; i++) {
        scanf("%d", &num);
        
        if(num % 2 == 0) {  
            evenCount++;   
            evenSum += num;  
        }
        else {              
            oddCount++;     
            oddSum += num;  
        }
    }
    
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);
    
    return 0;
}


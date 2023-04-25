#include<stdio.h>

int main() {
	int num;
	printf("enter a nnumber:");
	scanf("%d",&num);
	
	(num%2==0) ? (printf("Given number is even")):(printf("Given number is odd"));
	
	return 0;
}

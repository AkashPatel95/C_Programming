//program to find factorial using recursion
#include<stdio.h>
int fact(int n);//function declaration

int main() {
	int n,factorial;
	printf("enter n:");
	scanf("%d",&n);
	factorial=fact(n);//faunction calling
	printf("factorial is:%d",factorial);
	
	return 0;
}
//function definition
int fact(int n) {
	if(n==0) {
		return 1;
	}
	else {
		return(n*fact(n-1));//recursion
	}
}

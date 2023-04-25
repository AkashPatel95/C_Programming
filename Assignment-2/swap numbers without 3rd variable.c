#include<stdio.h>

int main() {
	
	int a,b;
	printf("enter two positive integers:");
	scanf("%d%d",&a,&b);
	printf("before swaping: a=%d and b=%d\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping: a=%d and b=%d\n",a,b);
	return 0;
}

#include<stdio.h>

int main() {
	printf("calculator using switch case\n");
	int x,y,z;
	char ch;
	printf("enter any of (+,-,%,*,/):");
	scanf("%c",&ch);
	fflush(stdin);
	printf("\n enter any number:");
	scanf("%d",&x);
	printf("\n enter any number:");
	scanf("%d",&y);
	
	switch(ch) {
		case '+':
			z=x+y;
			printf("addition is:%d",z);
			break;
			
		case'-':
			z=x-y;
			printf("subtraction is:%d",z);
			break;
			
		case'%':
			z=x%y;
			printf("modulo is:%d",z);
			break;
			
		case'*':
			z=x*y;
			printf("multiplication is:%d",z);
			break;
			
		case'/':
			z=x/y;
			printf("division is:%d",z);
			break;
			
		default:
			printf("\n invlid operation");
	}
	return 0;
}

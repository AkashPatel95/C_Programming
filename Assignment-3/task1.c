//menu driven calculator
#include<stdio.h>

int main() {
	int num1,num2,result,choice;
	char run;
	printf("===============Choice Board===============\n");
	printf("\n1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Modulo\n");
	printf("6. Exit\n");
	
	do{
	printf("enter your choice:");
	scanf("%d",&choice);
	
	printf("enter two numbers:");
	scanf("%d%d",&num1,&num2);
	
	
	switch(choice) {
		case 1:
			result=num1+num2;
			printf("your answer is:%d\n",result);
			break;
			
		case 2:
			result=num1-num2;
			printf("your answer is:%d\n",result);
			break;
			
		case 3:
			result=num1*num2;
			printf("your answer is:%d\n",result);
			break;
			
		case 4:
			if(num2!=0) {
			result=num1/num2;
			printf("your answer is:%d\n",result);
			}
			else {
			printf("cannot divide\n");
			}
			break;
			
		case 5:
			if(num2!=0) {
			result=num1%num2;
			printf("your answer is:%d\n",result);
			}
			else {
			printf("cannot divide\n");
			}
			break;
			
		case 6:
			printf("thank you\n");
			break;
			

	}
	fflush(stdin);
	printf("Do you want to continue? [y/n]:");
	scanf("%c",&run);
	if(run=='n') {
		printf("Thank you\n");
		break;
	}
} while(run=='Y'|| run=='y');
	
	return 0;
}

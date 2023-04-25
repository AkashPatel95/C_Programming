//Program to print Restaurant menu and according choice print total bill using function.
#include<stdio.h>
void restaurantMenu();

int main() {
	restaurantMenu();
	
	return 0;
}
void restaurantMenu() {
	int i,result,choice,quantity,price,sum=0,count=0;
	char run;
	
	printf("===============Welcome To TOPS Restaurant===============\n");
	printf("Sr No\t\t Item\t\t Price");
	printf("\n1\t\t Pizza\t\t 90/-");
	printf("\n2\t\t Burger\t\t 89/-");
	printf("\n3\t\t Pani-puri\t 100/-");
	printf("\n4\t\t Dosa\t\t 80/-");
	
	do{
	printf("\nEnter your choice:");
	scanf("%d",&choice);
		
	switch(choice) {
		case 1:
			printf("your item:Pizza\n");
			printf("enter quantity:");
			scanf("%d",&quantity);
			price=90;
			result=quantity * price;
			printf("Total price:%d\n",result);
			break;
			
		case 2:
			printf("your item:Burger\n");
			printf("enter quantity:");
			scanf("%d",&quantity);
			price=89;
			result=quantity * price;
			printf("Total price:%d\n",result);
			break;
			
		case 3:
			printf("your item:Pani-puri\n");
			printf("enter quantity:");
			scanf("%d",&quantity);
			price=100;
			result=quantity * price;
			printf("Total price:%d\n",result);
			break;
			
		case 4:
			printf("your item:Dosa\n");
			printf("enter quantity:");
			scanf("%d",&quantity);
			price=80;
			result=quantity * price;
			printf("Total price:%d\n",result);
			break;
			
		default:
			printf("Invalid input\n");
			break;
	}
	fflush(stdin);
	printf("Do you want anything else?:[y/n]");
	scanf("%c",&run);
	sum=sum+result;
	if(run=='n') {
		printf("Thank you\n");
		
		printf("Your total bill:%d rs.\n",sum);
	}
	} while(run=='y');

}

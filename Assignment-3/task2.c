//program to find area using choice system/menu
#include<stdio.h>

int main() {
	float L,W,AR,result;
	int choice;
	printf("===============Area Finder===============\n");
	printf("1. Circle\n");
	printf("2. Triangle\n");
	printf("3. Rectangle\n");
	
	
		printf("enter choice:");
		scanf("%d",&choice);
		
		printf("enter length:");
		scanf("%f",&L);
		printf("enter width:");
		scanf("%f",&W);
		printf("enter Rectangle area:");
		scanf("%f",&AR);
		
		switch(choice) {
			case 1:
				result=3.14 * (L/2) * (L/2);
				printf("Area of Circle:%f\n",result);
				break;
				
			case 2:
				result=(L * W)/2;
				printf("Area of Triangle:%f\n",result);
				break;
				
			case 3:
				result=L * W;
				printf("Area of Rectangle:%f\n",result);
				break;
				
			default:
				printf("Invalid input\n");
				break;
				
			
		}
		printf("Thank you\n");
	
	return 0;
}

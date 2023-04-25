//print table
#include<stdio.h>

int main() {
	int num,i,j;
	printf("enter any number:");
	scanf("%d",&num);
	
	for(i=num;i==num;i++) {
		for(j=1;j<=10;j++) {
			printf("%d*%d=%d\n",i,j,i*j);
		}
	}
	return 0;
}

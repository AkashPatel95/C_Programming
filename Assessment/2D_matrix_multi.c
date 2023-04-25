//program to make multiplication of 2-D matrix
#include<stdio.h>

int main() {
	int arr1[2][2],arr2[2][2],arr3[2][2],i,j,k;
	
	printf("\t\t\t\t\tMatrix Multiplication\t\t\t\t\t\n\n");
	printf("---------------Matrix:1---------------\n");
	
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("enter element-%d%d:",i,j);
			scanf("%d",&arr1[i][j]);
			
		}
	}
	
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n---------------Matrix:2---------------\n");
	
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("enter element-%d%d:",i,j);
			scanf("%d",&arr2[i][j]);
			
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	printf("-------------Result:Multiplication Matrix-------------\n");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			arr3[i][j]=0;
			for(k=0;k<2;k++) {
				arr3[i][j]+=arr1[i][k] * arr2[k][j];
			}
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

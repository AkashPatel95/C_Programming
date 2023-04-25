//program to make addition,subtraction and multiplication of 2D array
#include<stdio.h>

int main() {
	int n,i,j,k;
	printf("enter elements to be stored in an array:");
	scanf("%d",&n);
	
	int arr1[n][n],arr2[n][n],arr3[n][n];
//taking elements as input from user for array1	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("element-%d%d:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
//taking elements as input from user for array2
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("element-%d%d:",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
//addition of two arrays and storing it in 3rd array
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
//printing array3
	printf("Addition of an arrays:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
//subtraction of two arrays and storing it in 3rd array
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			arr3[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
//printing array3
	printf("Subtraction of an arrays:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
//multiplication of two arrays and storing it in 3rd array
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			arr3[i][j]=0;
			for(k=0;k<n;k++) {
				arr3[i][j]+=arr1[i][k] * arr2[k][j];
			}
		}
	}
//printing multiplication array
	printf("Multiplication of an arrays:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}

	return 0;
}

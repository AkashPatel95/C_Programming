//program to print array in ascending or decending order as per user's choice
#include<stdio.h>

int main() {
	int arr1[10],arr2[10],i,j,num,choice,temp;
	char run;
	printf("enter elements to be stored in an arrays:");
	scanf("%d",&num);
	
	//input the elements of array1 and array2
	for(i=0;i<num;i++) {
		printf("element-%d:",i);
		scanf("%d",&arr1[i]);
		
	}
	for(i=0;i<num;i++) {
		printf("element-%d:",i);
		scanf("%d",&arr2[i]);
		
	}
	do{
		printf("1. sort array in ascending order\n");
		printf("2. sort array in decending order\n");
		printf("enter a choice:");
		scanf("%d",&choice);
/*switch case to take choice and print arrays in ascending and decending order*/		
	switch(choice) {
		case 1://sorting array1 in ascending order
			for(i=0;i<num;i++) {
				for(j=i+1;j<num;j++) {
					if(arr1[i]>arr1[j]) {
						temp=arr1[i];
						arr1[i]=arr1[j];
						arr1[j]=temp;
					}
				}
			}
		//sorting array2 in ascending order
		for(i=0;i<num;i++) {
				for(j=i+1;j<num;j++) {
					if(arr2[i]>arr2[j]) {
						temp=arr2[i];
						arr2[i]=arr2[j];
						arr2[j]=temp;
					}
				}
			}
		printf("Array 1 in ascending order:\n");	
		for(i=0;i<num;i++) {
			printf("%d\t",arr1[i]);
		}
		printf("\n");
		
		printf("Array 2 in ascending order:\n");	
		for(i=0;i<num;i++) {
			printf("%d\t",arr2[i]);
		}
		printf("\n");
		break;
			
		case 2://sorting array1 in decending order
			for(i=0;i<num;i++) {
				for(j=i+1;j<num;j++) {
					if(arr1[i]<arr1[j]) {
					
					temp=arr1[i];
					arr1[i]=arr1[j];
					arr1[j]=temp;
				}
				}
			}
		//sorting array2 in decending order
			for(i=0;i<num;i++) {
				for(j=i+1;j<num;j++) {
					if(arr2[i]<arr2[j]) {
					
					temp=arr2[i];
					arr2[i]=arr2[j];
					arr2[j]=temp;
				}
				}
			}
		printf("Array 1 in decending order:\n");	
		for(i=0;i<num;i++) {
			printf("%d\t",arr1[i]);
		}
		printf("\n");
		
		printf("Array 2 in decending order:\n");	
		for(i=0;i<num;i++) {
			printf("%d\t",arr2[i]);
		}
		printf("\n");
		break;
		
		default:
			printf("invalid input\n");
			break;
		
	}
	fflush(stdin);
	printf("Do you want to continue?[y/n]:");
	scanf("%c",&run);
	if(run=='n') {
		printf("thank you\n");
	}
		
	}while(run=='y');
	return 0;
}

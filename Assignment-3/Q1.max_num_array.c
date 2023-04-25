//find max number using function in given array
#include<stdio.h>
void max_number();

int main() {
	max_number();
	return 0;
}

void max_number() {
	int arr[100],n,i,j,temp;
	printf("enter elements to be stored in an array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		printf("element-%d:",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(arr[i]>arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("maximum number of an array:%d\n",arr[n-1]);
	
}

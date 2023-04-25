//program to find length of string without using library function
#include<stdio.h>

int main() {
	char str[50];//string declaration
	int i,count=0;
	
	printf("enter a string:");
	gets(str);

//count characters through looping	
	for(i=0;str[i]!='\0';i++) {
		count++;
	}
	
	printf("length of string is:%d\n",count);
	return 0;
}

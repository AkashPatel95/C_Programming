//program to print reverse of string
#include<stdio.h>
#include<string.h>

int main() {
	char str[50];//string declaration
	int i,l;
	printf("enter a string:");
	fgets(str,50,stdin);
	l=strlen(str);//library function to find string lengh
	
//using for loop to print string in reverse order
	for(i=l;i>=0;i--) {
		printf("%c",str[i]);
	}
	return 0;
}

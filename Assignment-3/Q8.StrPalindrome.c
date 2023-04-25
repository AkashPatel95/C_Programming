//program to reverse string and check if it is palindrome or not
#include<stdio.h>
#include<string.h>

int main() {
	char str1[50],str2[50];//declaring strings
	int l,i;
	
	printf("enter a string:");
	fgets(str1,50,stdin);
	
	l=strlen(str1);
	strcpy(str2,str1);//copying str1 into str2
	
	printf("String in reverse order:");
	for(i=l;i>=0;i--) {
		printf("%c",str1[i]);
	}

//comparing both string	
	if(strcmp(str1,str2)==0) {
		printf("\nString is palindrome\n");
	}
	else {
		printf("\nString is not palindrome");
	}
	return 0;
}

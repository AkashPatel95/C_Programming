#include<stdio.h>
//Not considering leap year.
int main() {
	
	int days,years,weeks,total_days;
	printf("enter years:");
	scanf("%d",&years);
	
	total_days=365*years;
	printf("Total Days is:%d\n",total_days);
	
	printf("enter days:");
	scanf("%d",&days);
	
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	
	printf("total Years:%d\n",years);
	printf("total weeks:%d\n",weeks);
	printf("total days:%d\n",days);
	
	return 0;
}

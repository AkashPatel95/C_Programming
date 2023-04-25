#include<stdio.h>


int main() {
	
	float rad,a,b,c,base,height,cir,tri,rect,w,h;
	
	printf("enter the value of radius:");
	scanf("%f",&rad);
	
	cir= 3.14*rad*rad;
	printf("Area of the circle is: %f\n",cir);
	
	printf("enter the value of base and height:");
	scanf("%f %f",&base, &height);
	
	tri= 0.5*base*height;
	printf("Area of triangle for given base and height is:%f\n",tri);
	
	printf("enter value of width and height:");
	scanf("%f %f",&w,&h);
	
	rect=w*h;
	printf("Area of rectangle is: %f",rect);
	return 0;
}

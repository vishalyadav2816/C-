// write a program to calculate volume of cylinder

#include<stdio.h>
int main()
{
	float r,h,vol;
	printf("Enter the value of r and h \n",r,h);
	scanf("%f%f",&r,&h);
	
	vol = 3.14*r*r*h;
	printf("Volume of the cylinder  %f",vol);
} 

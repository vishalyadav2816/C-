// to calculate an salary of an employee

#include<stdio.h>

int main()
{
	float sal,day,leave,total;
	printf("Enter the per day salary of the employee \n");
	scanf("%f",&sal);
	
	printf("Enter the employee working day \n");
	scanf("%f",&day);
	
	printf("Enter the day employee take leave \n");
	scanf("%f",&leave);
	
	total = (day-leave)*sal;
	
	printf("the total salary is %f",total);
	
}

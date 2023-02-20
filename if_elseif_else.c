// if elseif ......else

#include<stdio.h>

int main()
{
	int age;
	printf("Enter the age \n");
	scanf("%d",&age);
	if (age<=0)
	{
		printf("Age is not valid \n");
	}
	else if(age>=0 && age<18)
		printf("Person is not eligilble to vote");
	else
		printf("Person is eligible to vote ");
}

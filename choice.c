// switch case
#include<stdio.h>
int main()
{
	int choice,a,b;
	printf("enter 1 for addition, 2 for subtraction and 3 for exit \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the value of a and b\n");
			scanf("%d%d",&a,&b);
			printf("sum is %d",a+b);
			break;
			
			case 2:
			printf("enter the value of a and b\n");
			scanf("%d%d",&a,&b);
			printf("sub is %d",a-b);
			break;
			
			case 3:
				exit(0);
			default:
				printf("Wrong input\n");
	}
}

//To swap the values of 2 integer variables by using third variables

#include<stdio.h>
int main ()
{


         int a,b,c;
         printf("Enter the values of a and b\n");                    
         scanf("%d%d",&a,&b);                                           
         printf("Before swap a and b are %d %d \n",a,b);                 
         c=a;   
         a=b;   
         b=c;   
         printf("After swap a and b are %d %d",a,b);
         
}

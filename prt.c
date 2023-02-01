//      calculate simple interest by taking p,r,t as input
#include<stdio.h>


int main()
{

    float p,r,t,s;
    printf("Enter the values of p and r and t\n");
    scanf("%f%f%f",&p,&r,&t);
    s=(p*r*t)/100;
    printf("interest is %f",s);
}

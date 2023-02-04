// write a progrsm to calculate average of five float variable

#include<stdio.h>
int main()
{
    float a,b,c,d,e,avg;
    
    printf("Enter five float numbers \n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    
    avg=(a+b+c+d+e)/5;
    
    printf("avg is %f",avg);
}


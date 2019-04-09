#include<stdio.h>
float func(float x,float y)
{
	return 1+x*y;
}
int main()
{
	float y1,y0,h,x1,x0,i,k1,k2,k3,k4,k;
    printf("Enter the value of x for which y is given");
    scanf("%f",&x0);
    printf("\nEnter the value of x for which y is required");
    scanf("%f",&x1);
    printf("\nEnter the given value of y(%f)",x0);
    scanf("%f",&y0);
    h=(x1-x0)/10;
    for(i=x0;i<x1;i+=h)
    {
    k1=h*func(i,y0);
    k2=h*func(i+h/2,y0+k1/2);
    k3=h*func(i+h/2,y0+k2/2);
    k4=h*func(i+h,y0+k3);
    k=(k1+2*(k2+k3)+k4)/6;
    y1=y0+k;
    y0=y1;
	}
    printf("The value of y(%f) is %f",x1,y1);
 return 0;
}

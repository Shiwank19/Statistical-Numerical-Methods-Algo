#include<stdio.h>
float dfunc(float x,float y)
{
	return 1+x*y;
}
int main()
{
 float y1,y0,h,x1,x0,i;
 printf("Enter the value of  value of x for which y is given");
 scanf("%f",&x0);
 printf("\nEnter the value of x for which y is required");
 scanf("%f",&x1);
 printf("\nEnter the given value of y(%f)",x0);
 scanf("%f",&y0);
 h=(x1-x0)/10;
 for(i=x0;i<x1;i=i+h)
 {
 	y1=y0+h*dfunc(i,y0);
 	y0=y1;
 }
 printf("The value of y(%f) is %f",x1,y1);
 return 0;
 
}

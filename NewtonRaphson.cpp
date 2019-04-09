#include<stdio.h>
#include<math.h>
float f(float x)
{
	return x*x*x-4*x+1;
}
float df(float x)
{
	return 3*x*x-4;
}
int main()
{
	float a,b,c,e=0.0001;
	printf("Enter the value of abscissa near to root approximately\n");
	scanf("%f",&a);
	c=a;
		do
		{
		   b=a-(f(a)/df(a));
		   c=a;
		   a=b;   
	    }
	    while(fabs(c-b)>e);
		
	
	printf("The root of the equation is %f",b);
	return 0;
}

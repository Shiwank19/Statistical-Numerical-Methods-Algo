#include<stdio.h>
#include<math.h>
float f(float x)
{
	return x*x*x-4*x+1;
}
int main()
{
	float a,b,c,e=0.001;
	printf("Enter the value of first abscissa\n");
	scanf("%f",&a);
	printf("Enetr the value of next abscissa\n");
	scanf("%f",&b);
	{
		do
		{
		
		   c=(a*f(b)-b*f(a))/(f(b)-f(a));
			a=b;
			b=c;
			
		  
	    }
	    while(fabs(b-a)>e);
		
	}
	printf("The root of the equation x^3-4*x+1 is %f",c);
	return 0;
}

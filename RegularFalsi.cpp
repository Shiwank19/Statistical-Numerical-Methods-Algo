#include<stdio.h>
#include<math.h>
float f(float x)
{
	return x*x*x-4*x+1;
}
int main()
{
	float a,b,c,e=0.001;
	printf("Enter the value of Negative ordinated abscissa\n");
	scanf("%f",&a);
	printf("Enetr the value of Positive ordinated abscissa\n");
	scanf("%f",&b);
	if (f(a)*f(b)<0)
	{
		do
		{
		
		   c=a-(b-a)*f(a)/(f(b)-f(a));
		   if(f(a)*f(c)<0)
		   {
			  b=c;
		   }
		   else
		  {
			  a=c;
		  }
	    }
	    while(fabs(a-b)>e);
		
	}
	printf("The root of the equation is %f",c);
	return 0;
}

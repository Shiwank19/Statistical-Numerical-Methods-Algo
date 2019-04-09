#include<stdio.h>
float func( float x);
int main()
{
	float a,b,e=0.0001,c,p;
	printf("Enter the value of positive ordinated abcissa (b)");
	scanf("%f",&b);
	printf("Enter the value of negative ordinated abcissa (a)");
	scanf("%f",&a);
	do
	{
		p=c;
		c=(a+b)/2.0;
		printf("\n After %f",c);
		if(func(c)<0)
		{
			a=c;
		}
		else
		{
		    b=c;
		}
		printf("\n After %f",c);
		if(p==c)
		break;
	}
	while(func(c)!=0);
	printf("The root of the function is %f",c);
	return 0;
}
float func(float x)
{
	return (3*x*x)-4*x-7;
}

#include<stdio.h>
float func(float x)
{
	return 1/(1+x*x);
}
int main()
{
	float a,b,n,h,sum,intg;
	printf("Enter the value of upper limit\n");
	scanf("%f",&b);
	printf("Enter the value of lower limit\n");
	scanf("%f",&a);
	printf("Enter the number of divisions\n");
	scanf("%f",&n);
	sum=func(a)+func(b);
	h=(b-a)/n;
	for(int i=1;i<n;i++)
	{
        if(i%2==0)
        {
        	sum+=2*func(a+i*h);
		}
		else sum+=4*func(a+i*h);
	}
	intg=(h/3)*sum;
	printf("\nThe  value of integration of function 1/(1=x*x) over limit %f to %f  is %f",a,b,intg);
	return 0;
	
}

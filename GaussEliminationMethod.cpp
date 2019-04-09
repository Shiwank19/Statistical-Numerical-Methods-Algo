#include<stdio.h>
int main()
{
	float a[3][4],x,y,z;
	int i,j;
	printf("Enter the values of Augmented matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d][%d]=",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<4;j++)
	{
		a[2][j]-=(a[0][j]*a[2][0])/a[0][0];
		a[1][j]-=(a[0][j]*a[1][0])/a[0][0];
	}
	for(j=1;j<4;j++)
	{
		a[2][j]-=(a[1][j]*a[2][1])/a[1][1];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%f",a[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	z=a[2][3]/a[2][2];
	y=(a[1][3]-a[1][2]*z)/a[1][1];
	x=(a[0][3]-a[0][2]*z-a[0][1]*y)/a[0][0];
	printf("x=%f\n",x);
	printf("y=%f\n",y);
	printf("z=%f\n",z);
	
}

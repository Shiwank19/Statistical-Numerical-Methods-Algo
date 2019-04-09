#include<stdio.h>
#include<stdlib.h>
void printMatrix(float**,int);
int main()
{
	float **a,c;
	int i,j,k,n;
	printf("\nEnter the no of unknowns:");
	scanf("%d",&n);
	a=(float**)malloc(n*sizeof(float*));
	for(i=0;i<n;i++)
	a[i]=(float*)malloc((n+1)*sizeof(float));
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("\nEnter the value of a[%d][%d]:",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	for(k=0;k<n-1;k++)
	{
		for(i=n-1;i>k;i--)
		{
			printMatrix(a,n);
			c=a[i][k]/a[k][k];
			for(j=0;j<=n;j++)
			{
			    a[i][j]-=a[k][j]*c;
			}
		}
	}
	printMatrix(a,n);
	for(k=n-1;k>0;k--)
	{
		for(i=0;i<k;i++)
		{
			c=a[i][k]/a[k][k];
			for(j=0;j<=n;j++)
			{
				a[i][j]-=a[k][j]*c;
			}
			printMatrix(a,n);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("Unknown #%d:%f\n",i+1,a[i][n]/a[i][i]);
	}
	for(i=0;i<n;i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
}
void printMatrix(float** a,int n)
{
	int i,j;
	printf("|");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("|\n|");
	}
	printf("\n\n");
}

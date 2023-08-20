#include <stdio.h>
int main()
{
	int i,j,k,a,b,c,d;
	int x[10][10], y[10][10], z[10][10];
	printf("Enter the order of First Matrix: ");
	scanf("%d %d",&a,&b);
	printf("Enter the order of Second Matrix: ");
	scanf("%d %d",&c,&d);
	if(b==c)
	{
		printf("\nEnter elements of First Matrix:\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				scanf("%d",&x[i][j]);
			}
		}
		printf("\nEnter elements of Second Matrix:\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				scanf("%d",&y[i][j]);
			}
		}
	}
	else
	{
		printf("\nMatrix is multiplication is not possible");
	}
	
	for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				z[i][j] = 0;
				for(k=0;k<c;k++)
				{
					z[i][j] = z[i][j] + x[i][k] * y[k][j];
				}
			}
		}
	printf("\n");
	for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				printf("%d\t",z[i][j]);
			}
			printf("\n");
		}
	return 0;
}

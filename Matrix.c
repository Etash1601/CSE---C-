#include <stdio.h>
int main()
{
	int i,j,index1,index2,max;
	int a[24][3];
	for(i=0;i<24;i++)
	{
		a[i][0]= i+1;
	}
	for(i=0;i<24;i++)
	{
		printf("Enter temperature and humdity of %d hour: ",i+1);
		scanf("%d %d",&a[i][1], &a[i][2]);
	}
	max = a[0][1];
	for(i=0;i<24;i++)
	{
		if(max < a[i][1])
			{
				max = a[i][1];
				index1 = i;
			}
	}
	max = a[0][2];
	for(i=0;i<24;i++)
	{
		if(max < a[i][2])
			{
				max = a[i][2];
				index2 = i;
			}
	}
	printf("\n");
	for(i=0;i<24;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
			if(j==2)
				printf("\n");
		}
	}
	printf("\nMaximum Temperature was recorded at %d hours\n",index1+1);
	printf("Maximum Humidity was recorded at %d hours\n",index2+1);
	return 0;
}

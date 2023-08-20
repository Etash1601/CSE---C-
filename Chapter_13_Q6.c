#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int n,i;
	printf("Enter number of terms = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d = ",i+1);
		scanf("%d",&a[i]);
	}
	
	float mean;
	int sum = 0;
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	mean = sum/n;
	float sd = 0;
	for(i=0;i<n;i++)
	{
		sd = sd + (pow((a[i] - mean),2));
	}
	sd = sqrt(sd/(n-1));
	printf("\nStandard Deviation and Mean = %f %f",sd,mean);
	return 0;
}